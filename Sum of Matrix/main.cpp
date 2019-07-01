/*
	Sum of Matrix...!!!
*/
#include<iostream>
#include<conio.h>

const int arrSize_i = 3;
const int arrSize_j = 3;

void Enter_Matrix(int M[arrSize_i][arrSize_j])
{
	for (int i = 0; i < arrSize_i; ++i)
		for (int j = 0; j < arrSize_j; ++j)
			std::cin >> M[i][j];
}

void Showing(int M[arrSize_i][arrSize_j])
{
	for (int i = 0; i < arrSize_i; ++i)
	{
		for (int j = 0; j < arrSize_j; ++j)
			std::cout << M[i][j] << " ";
		std::cout << std::endl;
	}
}

int main()
{
	int M_1[arrSize_i][arrSize_j], M_2[arrSize_i][arrSize_j];

	std::cout << "Enter first Matrix...!!!\n";
	Enter_Matrix(M_1);
	std::cout << "\n\nEnter second Matrix...!!!\n";
	Enter_Matrix(M_2);

	std::cout << "\n\n";
	int M_3[arrSize_i][arrSize_j];
	for (int i = 0; i < arrSize_i; ++i)
		for (int j = 0; j < arrSize_j; ++j)
			M_3[i][j] = M_1[i][j] + M_2[i][j];

	Showing(M_1);
	std::cout << "\n  +\n\n";
	Showing(M_2);
	std::cout << "\n  =\n\n";
	Showing(M_3);

	_getch();
}