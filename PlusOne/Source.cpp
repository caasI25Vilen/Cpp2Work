#include<iostream>

const int Size = 5;

int* PlusOne(int arr[])
{
	int Numb = 0, t = 1;
	for (int i = 0; i < Size; ++i)
	{
		Numb += arr[Size - 1 - i] * t;
		t *= 10;
	}
	++Numb;
	for (int i = 0; i < Size; ++i)
	{
		arr[Size - 1 - i] = Numb % 10;
		Numb /= 10;
	}
	return arr;
}

int main()
{
	int arr[Size];
	std::cout << "Enter an array: ";
	for (int i = 0; i < Size; ++i)
		std::cin >> arr[i];

	int* ptr = PlusOne(arr);
	std::cout << "Output: [ ";
	for (int i = 0; i < Size; ++i)
		std::cout << *(ptr + i) << ' ';
	std::cout << " ]\n";
		

	system("pause");
}