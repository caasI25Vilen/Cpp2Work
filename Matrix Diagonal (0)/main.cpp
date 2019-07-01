#include<iostream>
#include<conio.h>

const int Size = 7;


void Diagonal_Symmetric(int M[][Size])
{
	for (int i = 0; i < Size; ++i)
		for (int j = i; j < Size; ++j)
			M[i][j] = j - i;

	for (int i = 1; i < Size; ++i)
		for (int j = 0; j < i; ++j)
			M[i][j] = i - j;
}

int main()
{
	int Matrix[Size][Size];

	for (int i = 0; i < Size; ++i)
		for (int j = i; j < Size; ++j)
			Matrix[i][j] = j - i;

	for (int i = 1; i < Size; ++i)
		for (int j = 0; j < i; ++j)
			Matrix[i][j] = i - j;



	for (int i = 0; i < Size; ++i)
	{
		for (int j = 0; j < Size; ++j)
			std::cout << Matrix[i][j] << " ";
		std::cout << std::endl;
	}

	_getch();
}