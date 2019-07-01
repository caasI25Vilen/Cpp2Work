//																0 2 12 13 18 20 31 55 56 57 58 59 91 101 300 301 309 427 511 999
#include<iostream>

const int m = 4, n = 5;
void display(int arr[][n])
{
	std::cout << "\n\n";
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			std::cout << arr[i][j] << "\t";
		std::cout << "\n\n";
	}
	std::cout << "\n\n";
}
void EnterMatrix(int arr[][n])
{
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			std::cin >> arr[i][j];
}

bool BinarySearch(int arr[][n], int x)
{
	int i = 0;
	for (i = 0; i < m; ++i)
	{
		if (x == arr[i][0])
			return true;
		if (x < arr[i][0])
			break;
	}

	int L_limit = 0, R_limit = n - 1;
	int j;
	while (R_limit >= L_limit)
	{
		j = (R_limit + L_limit) / 2;
		if (arr[i - 1][j] == x)
			return true;
		else if (arr[i - 1][j] > x)
			R_limit = j - 1;
		else
			L_limit = j + 1;
	}
	
	return false;
}

int main()
{
	int arr[m][n], x;
	std::cout << "Enter Matrix: ";
	EnterMatrix(arr);
	std::cout << "Enter Number: ";
	std::cin >> x;
	display(arr);

	if (BinarySearch(arr, x))
		std::cout << "Exist...!!!\n\n";
	else
		std::cout << "Does not Exist...!!!\n\n";

	system("pause");
}