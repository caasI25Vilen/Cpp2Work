#include<iostream>
#include<conio.h>
const int Size = 10;

void CreatMatrix(int ARR[][Size], int SIZE)
{
	for (int i = 0; i < SIZE / 2; ++i)				//Creating a matrix in the second quadrant
	{
		int k = 0;
		for (int j = 0; j < SIZE / 2; ++j)
		{
			ARR[i][j] = k;
			if (k < i)
				++k;
		}
	}

	for (int i = 0; i < SIZE / 2; ++i)
		for (int j = 0; j < SIZE / 2; ++j)
		{
			ARR[i][SIZE - j - 1] = ARR[i][j];				//pasting the copy of the second quadrant matrix into the first quadrant
			ARR[SIZE - i - 1][j] = ARR[i][j];				//pasting the copy of the second quadrant matrix into the third quadrant
			ARR[SIZE - 1 - i][SIZE - 1 - j] = ARR[i][j];	//pasting the copy of the second quadrant matrix into the fourth quadrant
		}

}

int main()
{
	int Matrix[Size][Size];
	CreatMatrix(Matrix, Size);

	for (int i = 0; i < Size; ++i)
	{
		for (int j = 0; j < Size; ++j)
			std::cout << Matrix[i][j] << " ";
		std::cout << std::endl;
	}

	_getch();
}