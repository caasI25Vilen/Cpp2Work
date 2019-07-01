#include<iostream>

const int n = 4;

void Rotate(int MATRIX[n][n])
{
	int temp;
	for(int i=0;i<n-1;++i)
		for (int j = i + 1; j < n; ++j)
		{
			temp = MATRIX[i][j];
			MATRIX[i][j] = MATRIX[j][i];
			MATRIX[j][i] = temp;
		}
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n / 2; ++j)
		{
			temp = MATRIX[i][j];
			MATRIX[i][j] = MATRIX[i][n - j - 1];
			MATRIX[i][n - j - 1] = temp;
		}
}

int main()
{
	int Matrix[n][n];
	std::cout << "Enter Matrox: \n";
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			std::cin >> Matrix[i][j];
	std::cout << "\n\n";

	std::cout << "Before Rotate...!!!\n\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			std::cout << Matrix[i][j] << '\t';
		std::cout << "\n\n";
	}std::cout << '\n';

	Rotate(Matrix);

	std::cout << "After Rotate...!!!\n\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
			std::cout << Matrix[i][j] << '\t' ;
		std::cout << "\n\n";
	}std::cout << '\n';

	system("pause");
}