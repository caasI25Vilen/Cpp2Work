//									1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35

#include<iostream>

const int M = 5, N = 7;
void SpiralOrder(int lower_limit, int right_limit, int M[M][N])
{	
	int upper_limit = 0, left_limit = 0;
	int i;
	std::cout << "[ ";
	while (upper_limit < lower_limit && left_limit < right_limit)
	{
		for (i = left_limit; i < right_limit; ++i)
			std::cout << M[upper_limit][i] << ' ';
		++upper_limit;
		for (i = upper_limit; i < lower_limit; ++i)
			std::cout << M[i][left_limit - 1] << ' ';
		--right_limit;
		if (upper_limit < lower_limit)
		{
			for (i = right_limit - 1; i >= left_limit; --i)
				std::cout << M[lower_limit - 1][i] << ' ';
			--lower_limit;
		}
		if (left_limit < right_limit)
		{
			for (i = lower_limit - 1; i >= upper_limit; --i)
				std::cout << M[i][left_limit];
			++left_limit;
		}
	} std::cout << "] ";
}
int main()
{
	int Matrix[M][N];
	std::cout << "Enter Matrox: \n";
	for (int i = 0; i < M; ++i)
		for (int j = 0; j < N; ++j)
			std::cin >> Matrix[i][j];
	std::cout << "\n\n" << "Matrix:\n";
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
			std::cout << Matrix[i][j] << '\t';
		std::cout << "\n\n";
	}std::cout << "\n\n"; //displaying the matrix

	int lower_limit = M, right_limit = N;

	std::cout << "Spiral:\n";
	SpiralOrder(lower_limit,right_limit,Matrix);

	std::cout << "\n\n";
	system("pause");
}