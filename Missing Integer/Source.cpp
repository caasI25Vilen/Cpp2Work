#include<iostream>

const int Size = 4;

int MissingInteger(int arr[])
{
	int k = 0;
	bool t;
	do
	{
		t = true;
		++k;
		for (int i = 0; i < Size; ++i)
		{
			if (k == arr[i])
			{
				t = false;
				break;
			}
		}
	} while (!t);
	return k;
}

int main()
{
	int arr[Size];
	std::cout << "Enter an array: ";
	for (int i = 0; i < Size; ++i)
		std::cin >> arr[i];
	
	std::cout << "\nOutput: " << MissingInteger(arr) << std::endl;

	system("pause");
}