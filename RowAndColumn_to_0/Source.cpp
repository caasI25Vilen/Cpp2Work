//																	1 1 1 1 1 1 1 0 1 1 1 1 1 1 1 1 1 1 0 1
#include<iostream>

const int m = 4, n = 5;

void RowAndColumn(int M[m][n])
{
	int M_Copy[m][n];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			M_Copy[i][j] = M[i][j];

	for(int i=0;i<m;++i)
		for (int j = 0; j < n; ++j)
		{
			if (M_Copy[i][j] == 0)
			{
				for (int k = 0; k < n; ++k)
					M[i][k] = 0;
				for (int k = 0; k < m; ++k)
					M[k][j] = 0;
			}
		}
}

int main()
{
	int Matrix[m][n];
	std::cout << "Enter a Matrix: ";
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			std::cin >> Matrix[i][j];
	std::cout << "\n\nMatrix:\n";
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			std::cout << Matrix[i][j] << '\t';
		std::cout << "\n\n";
	}

	RowAndColumn(Matrix);
	std::cout << "\n\n";
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			std::cout << Matrix[i][j] << '\t';
		std::cout << "\n\n";
	}

	system("pause");
}