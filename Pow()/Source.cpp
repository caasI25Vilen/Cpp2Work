#include<iostream>

double Pow(double x, int n)
{
	double Multiply = 1;
	if (n > 0)
	{
		for (int i = 0; i < n; ++i)
			Multiply *= x;
		return Multiply;
	}
	else if (n < 0)
	{
		for (int i = 0; i < n; ++i)
			Multiply /= x;
		return Multiply;
	}
	else
		return 1;
}


int main()
{
	double x;
	int n;
	std::cout << "Input: ";
	std::cin >> x >> n;
	std::cout << "\nOutput: ";
	if (x == 0 && n < 0)
		std::cout << "Undefined\n\n";
	else
		std::cout << pow(x, n) << "\n\n";

	system("pause");
}