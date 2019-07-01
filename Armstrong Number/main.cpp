#include<iostream>
#include<cmath>

int cube(int x)
{
	return(x*x*x);
}


void Check_Arm_Numb(int NUMB)
{
	int Digit, Sum = 0;
	int N = NUMB;
	while (N != 0)
	{
		Digit = N % 10;
		Sum += cube(Digit);
		N /= 10;
	}
	if (Sum == NUMB)
		std::cout << NUMB << " is an Armstrong Number." << std::endl;
	else
		std::cout << NUMB << " is not an Armstrong Number" << std::endl;
}


int main()
{
	int Numb;
	std::cout << "Enter Number: ";
	std::cin >> Numb;
	std::cout << "\n\n";

	Check_Arm_Numb(Numb);


	system("pause");
}