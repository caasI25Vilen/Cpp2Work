/*
	Check Whether a Number can be Expressed as a Sum of Two Prime Numbers...!!!
*/
#include<iostream>
#include<conio.h>

int main()
{
	int numb;
	std::cout << "Enter Number...!!!" << std::endl;
	std::cin >> numb;

	for (int i = 2; i < numb; ++i)
	{
		bool t = true;
		for (int j = 2; j < i; ++j)
		{
			if (!(i % j))
			{
				t = false;
				break;
			}
		}
		if (t)
		{
			for (int j = 2; j < numb - i; ++j)
			{
				if (!((numb - i) % j))
				{
					t = false;
					break;
				}
			}

		}
		if (t)
			std::cout << i << " + " << numb - i << " = " << numb << std::endl;


	}


	_getch();
}