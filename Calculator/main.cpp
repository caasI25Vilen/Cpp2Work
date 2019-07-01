/*
	Calculator...!!!
*/
#include<iostream>
#include<conio.h>

int main()
{
	double a, b;
	char symb;
	std::cout << "Calculator...!!!\n";

	std::cin >> a >> symb >> b;

	switch (symb)
	{
	case'+':
		std::cout << a << " + " << b << " = " << a + b << std::endl;
		break;
	case'-':
		std::cout << a << " - " << b << " = " << a - b << std::endl;
		break;
	case'*':
		std::cout << a << " * " << b << " = " << a * b << std::endl;
		break;
	case '/':
		std::cout << a << " / " << b << " = " << a / b << std::endl;
		break;

	default:
		std::cout << "Error: Try again...!!!" << std::endl;

	}


	_getch();
}