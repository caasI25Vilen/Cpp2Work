#include<iostream>
#include<conio.h>

int main()
{
	int n;
	std::cout << "Enter Integer Number...!!!" << std::endl;
	std::cin >> n;

	unsigned long long int result = 1;
	for (int i = 0; i < n; ++i)
	{
		result *= (n - i);
	}

	std::cout << n << "! = " << result << std::endl;


	_getch();
}