/*
	1/1+1/2+1/3+...+1/n = ???
*/
#include<iostream>
#include<conio.h>

double Small_Inf(double n)
{
	if (n <= 1)
		return 1;
	else
		return 1 / n + Small_Inf(n - 1);

}

int main()
{
	double N;
	std::cout << "Enter positive number N: ";
	std::cin >> N;
	if (N > 0)
		std::cout << Small_Inf(N) << std::endl;
	else
		std::cout << "N must be positive number...!!!";


	_getch();
}