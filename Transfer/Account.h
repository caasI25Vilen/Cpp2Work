#pragma once
#include<string>

class Account
{
public:
	Account(const std::string& nameSurname, const std::string& login, const short& pinCode, const double& balance);
	/*
		bool operator==(const Account& otherUser) const;
		bool operator!=(const Account& otherUser) const;
		bool operator>(const Account& otherUser) const;
		bool operator<(const Account& otherUser) const;
		bool operator>=(const Account& otherUser) const;
		bool operator<=(const Account& otherUser) const;
		*/
	double getBalance() const;
	std::string getNameSurname() const;
	void getMoney(const double& money);
	void sendMoney(const double& money);


private:
	std::string nameSurname_;
	std::string login_;
	short pinCode_;
	double balance_;
};