#include <iostream>
#include <conio.h>

int main()
{
	int Numb;
	std::cout << "Enter Number...!!!" << std::endl;
	std::cin >> Numb;

	int j, m_Numb = Numb;
	int Rev_Numb = 0;
	while (m_Numb)
	{
		j = m_Numb % 10;
		Rev_Numb = Rev_Numb * 10 + j;
		m_Numb = m_Numb / 10;
	}

	if (Numb == Rev_Numb)
		std::cout << "\n\n" << Numb << " is Palindromic Number...!!!" << std::endl;
	else
		std::cout << "\n\n" << Numb << " is not Plaindromic Number...!!!" << std::endl;



	_getch();
}