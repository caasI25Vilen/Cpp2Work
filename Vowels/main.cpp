/*
	Count the number of vowels in the string...!!!
*/
#include<iostream>
#include<conio.h>

const int strSize = 18;

void Enter_str(char str[strSize])
{
	for (int i = 0; i < strSize; ++i)
		std::cin >> str[i];
}

int Vowel_Finder(int i, char str[])
{
	char Vowel = str[i];
	switch (Vowel)
	{
	case 'A': case 'E': case 'I': case 'O': case 'U': case 'Y':
	case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':
		return 1;

	default:
		return 0;
	}
}

int main()
{
	char str[strSize];
	Enter_str(str);
	std::cout << "\n\n";

	int k = 0;
	for (int i = 0; i < strSize; ++i)
	{
		if (Vowel_Finder(i, str))
			++k;
	}

	std::cout << "Number of vowels in the string: " << k << std::endl;

	_getch();
}