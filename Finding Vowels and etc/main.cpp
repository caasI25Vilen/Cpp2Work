#include<iostream>

int Vowels(char STR[], int Size)
{
	int counter = 0;
	for (int i = 0; i < Size - 1; ++i)
	{
		switch (STR[i])
		{
		case 'A':	case 'E':	case 'I':	case 'O':	case 'U':	case 'Y':
		case 'a':	case 'e':	case 'i':	case 'o':	case 'u':	case 'y':
			++counter;
		}
	}
	return counter;
}

//	Analogical to the "Vowels" function...!!!
//////////////////////////////////////////////
int Consonants(char STR[], int Size)
{
	int counter = 0;
	for (int i = 0; i < Size - 1; ++i)
	{
		switch (STR[i])
		{
		case 'B':	case 'C':	case 'D':	case 'F':	case 'G':	case 'H':	case 'J':	case 'K':	case 'L':	case 'M':
		case 'b':	case 'c':	case 'd':	case 'f':	case 'g':	case 'h':	case 'j':	case 'k':	case 'l':	case 'm':

		case 'N':	case 'P':	case 'Q':	case 'R':	case 'S':	case 'T':	case 'V':	case 'X':	case 'Z':	case 'W':
		case 'n':	case 'p':	case 'q':	case 'r':	case 's':	case 't':	case 'v':	case 'x':	case 'z':	case 'w':

			++counter;
		}
	}
	return counter;
}

int Digits(char STR[], int Size)
{
	int counter = 0;
	for (int i = 0; i < Size - 1; ++i)
	{
		switch (STR[i])
		{
		case '0':	case '1':	case '2':	case '3':	case '4':
		case '5':	case '6':	case '7':	case '8':	case '9':
			++counter;
		}
	}
	return counter;

}
//////////////////////////////////////////////
int WhiteSpaces(char STR[], int Size)
{
	int counter = 0;
	for (int i = 0; i < Size - 1; ++i)
	{
		if (STR[i] == ' ')
			++counter;
	}
	return counter;
}

int main()
{
	const int N = 101;
	char str[N];
	std::cout << "Max Size of string: " << N - 1 << std::endl;
	std::cout << "Enter string:\t";
	std::cin.getline(str, N);
	std::cout << "\n\n";

	std::cout << "Vowels:      " << Vowels(str, N) << std::endl;
	std::cout << "Consonants:  " << Consonants(str, N) << std::endl;
	std::cout << "Digits:      " << Digits(str, N) << std::endl;
	std::cout << "WhiteSpaces: " << WhiteSpaces(str, N) << std::endl;
	system("pause");
}