#include<iostream>
#include<conio.h>

const int Size = 7;

void First_String(char STR[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cin >> STR[i];
		if (STR[i] == '\n')
			break;
	}
}
int Deleting(char STR_1[], char STR_2[], int size, char CH, int J)
{
	for (int i = 0; i < size; ++i)
	{
		if (STR_1[i] != CH)
		{
			STR_2[J] = STR_1[i];
			++J;
		}
	}
	return J;
}

int main()
{
	char str_1[Size], str_2[Size];

	std::cout << "Enter string: ";
	First_String(str_1, Size);

	char ch;
	std::cout << "\nEnter character you want to delete: ";
	std::cin >> ch;

	int j = 0;
	j = Deleting(str_1, str_2, Size, ch, j);
	std::cout << "\n\n";
	for (int i = 0; i < j; ++i)
		std::cout << str_2[i];

	_getch();
}