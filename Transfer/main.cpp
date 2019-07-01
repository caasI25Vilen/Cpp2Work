#include<iostream>
#include"Account.h"
#include<thread>

void transfer(Account& a, Account& b, double money)	//from a to b
{
	a.sendMoney(money);
	b.getMoney(money);
}

int main()
{
	Account A("Alan Turing", "AlanTuring@gmail.com", 10084, 100);
	Account B("Adolf Hitler", "Hitler@gmail.com", 25357, 200);

	std::cout << "Before transfer:\n" << "Alan Turing's balance: " << A.getBalance() << "\nAdolf Hitler's balance: " << B.getBalance() << "\n" << std::endl;

	std::thread t1(transfer, std::ref(A), std::ref(B), 20);
	std::thread t2(transfer, std::ref(B), std::ref(A), 50);

	t1.join();
	t2.join();

	std::cout << "Before transfer:\n" << "Alan Turing's balance: " << A.getBalance() << "\nAdolf Hitler's balance: " << B.getBalance() << "\n" << std::endl;

	system("pause");
}