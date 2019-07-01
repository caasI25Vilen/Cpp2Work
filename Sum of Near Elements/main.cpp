/*
	SUM LEFT AND RIGHT ELEMENTS...!!!
*/
#include<iostream>
#include<conio.h>

const int Size = 10;

int* SUM(int* ARR, int SIZE)
{
	static int SUM_ARR[sizeof(ARR)];
	for (int i = 0; i < SIZE; ++i)
	{
		if (i == 0)
			SUM_ARR[i] = *(ARR + 1);
		else if (i == SIZE - 1)
			SUM_ARR[i] = *(ARR + i - 1);
		else
			SUM_ARR[i] = *(ARR + i - 1) + *(ARR + i + 1);
	}
	return SUM_ARR;
}

int main()
{
	int arr[Size];

	for (int i = 0; i < Size; ++i)
	{
		std::cin >> arr[i];
	}

	int* p;
	p = SUM(arr, Size);

	for (int i = 0; i < Size; ++i)
	{
		std::cout << *(p + i) << " ";
	}

	_getch();
}