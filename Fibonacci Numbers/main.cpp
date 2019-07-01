/*
	Fibonacci Numbers...!!!
*/
#include<iostream>
#include<conio.h>

int main()
{
	std::cout << "Enter n: ";
	int n;
	std::cin >> n;

	int x_1 = 0, x_2 = 1;
	int sum = 1;
	for (int i = 1; i <= n; ++i)
	{

		std::cout << sum << " ";
		sum = x_1 + x_2;
		x_1 = x_2;
		x_2 = sum;
	}


	_getch();
}