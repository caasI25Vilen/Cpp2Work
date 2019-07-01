#include<iostream>

const int m = 3;
const int n = 5;

void Transpose(int MATRIX[m][n])
{
	static int M[n][m];
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			M[j][i] = MATRIX[i][j];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			std::cout << M[i][j] << ' ';
		}
		std::cout << '\n';
	}
}

int main()
{
	int Matrix[m][n];
	std::cout << "Rows:    " << m << '\n'
		<< "Columns: " << n << "\n\n"
		<< "Enter Matrix:\n";
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			std::cin >> Matrix[i][j];
	std::cout << "\n\n";


	Transpose(Matrix);

	std::cout << "\n\n";
	system("pause");
}