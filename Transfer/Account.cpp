#include"Account.h"

Account::Account(const std::string & nameSurname, const std::string & login, const short & pinCode, const double & balance)
	: nameSurname_(nameSurname), login_(login), pinCode_(pinCode), balance_(balance) {}
/*
bool Account::operator==(const Account & otherUser) const
{
	return balance_ == otherUser.balance_;
}

bool Account::operator!=(const Account & otherUser) const
{
	return !(*this==otherUser);
}

bool Account::operator>(const Account & otherUser) const
{
	return balance_ > otherUser.balance_;
}

bool Account::operator<(const Account & otherUser) const
{
	return balance_ < otherUser.balance_;
}

bool Account::operator>=(const Account & otherUser) const
{
	return !(*this < otherUser);
}

bool Account::operator<=(const Account & otherUser) const
{
	return !(*this>otherUser);
}
*/
double Account::getBalance() const
{
	return balance_;
}

std::string Account::getNameSurname() const
{
	return nameSurname_;
}

void Account::getMoney(const double & money)
{
	balance_ += money;
}

void Account::sendMoney(const double & money)
{
	balance_ -= money;
}