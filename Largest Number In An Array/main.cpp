#include<iostream>
#include<conio.h>

const int arrSize = 10;
int main()
{
	int arr[arrSize];
	for (int i = 0; i < arrSize; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << "\n\n\n";

	int Max = arr[0];
	for (int i = 1; i < arrSize; ++i)
	{
		if (arr[i] >= Max)
			Max = arr[i];
	}
	std::cout << "Latgest Number is " << Max << std::endl;

	_getch();
}