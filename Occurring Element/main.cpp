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

	int value = arr[0];
	int k_2 = 0;
	int k_1;
	for (int i = 0; i < arrSize; ++i)
	{
		k_1 = 0;
		for (int j = i + 1; j < arrSize; ++j)
		{
			if (arr[i] == arr[j])
				++k_1;
		}
		if (k_1 > k_2)
		{
			k_2 = k_1;
			value = arr[i];
		}
	}
	std::cout << value << std::endl;


	_getch();
}