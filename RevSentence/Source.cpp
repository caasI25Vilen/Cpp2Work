#include<iostream>
#include<string>

void Rev(std::string str)
{
	int k = str.find_first_of(' ');
	if (k >= 0)
		Rev(str.substr(k + 1));
	std::cout << str.substr(0, k) << ' ';
}

int main()
{
	std::string str;
	std::cout << "Enter string: ";
	std::getline(std::cin, str);

	std::cout << "\nOutput: ";
	Rev(str);
	std::cout << "\n\n\n";

	system("pause");
}