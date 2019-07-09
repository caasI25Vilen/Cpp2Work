#include<iostream>
#include<stack>

#define m 5
#define n 7

void RowAndColumn(int M[m][n])
{
	std::stack<std::pair<int, int>> s;
	
	for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
			if (!M[i][j])
				s.push(std::make_pair(i, j));
		
	std::pair<int, int> P;

	while (!s.empty())
	{
		P = s.top();
		s.pop();

		for (int j = 0; j < n; ++j)
			M[P.first][j] = 0;
		for (int i = 0; i < m; ++i)
			M[i][P.second] = 0;
	}
}

void Display(int M[m][n])
{
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
			std::cout << M[i][j] << "\t";
		std::cout << "\n\n";
	}
	std::cout << "\n\n\n";
}

int main()
{
	int Matrix[m][n] = 	{	
							{1,  4,  6,  8,  2,  1,  9},
							{5,  5,  0,  3,  6,  7,  8},
							{6,  1,  1,  1,  6,  3,  1},
							{7,  8,  4,  9,  9,  0,  7},
							{2,  3,  6,  7,  4,  0,  0},
						};
	
	std::cout << "Before:\n\n";
	Display(Matrix);
	RowAndColumn(Matrix);
	std::cout << "After:\n\n";
	Display(Matrix);

	system("pause");
}