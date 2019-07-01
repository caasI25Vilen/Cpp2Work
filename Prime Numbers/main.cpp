/*
	 Display Prime Numbers Between Two Intervals...!!!
*/
#include<iostream>
#include<conio.h>

int main()
{
	int a, b; // [a;b] interval
	std::cout << "Enter Interval...!!!" << std::endl;
	do
	{
		std::cin >> a >> b;
		if (a >= b)
			std::cout << "Error: Wrong Interval...!!!\nThe First Number Must Be Greater Then The Second...!!!\n\n";
	} while (!(a < b));

	std::cout << "\nInterval [" << a << ";" << b << "]" << std::endl;
	std::cout << "Prime Number(s): ";

	if (a == 0 || a == 1)				//		   0 and 1
		a = 2;							//	are not prime numbers

	bool t = false;
	int k = 0;
	for (int i = a; i <= b; ++i)
	{
		t = true;
		for (int j = 2; j <= i / 2; ++j)
			if (!(i%j))
			{
				t = false;
				break;
			}
		if (t)
		{
			std::cout << i << " ";
			k = 1;
		}

	}
	if (!k)
		std::cout << "There are no prime numbers...!!!";

	_getch();
}