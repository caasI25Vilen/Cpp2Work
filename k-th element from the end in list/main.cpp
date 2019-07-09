#include<iostream>
#include<forward_list>

void k_thElement(int& k, std::forward_list<char>& LIST)
{
	std::cout << k << "-th element from the end is: ";

	auto ptr1 = LIST.begin();
	auto ptr2 = LIST.begin();
	while (ptr1 != LIST.end())
	{
		++ptr1;
		if (k == 0)
			++ptr2;
		else
			--k;
	}

	std::cout << *ptr2 << std::endl;
}

void Display(std::forward_list<char>& LIST)
{
	for (auto it = LIST.begin(); it != LIST.end(); ++it)
		std::cout << *it << "  ";
	std::cout << "\n\n";
}

int main()
{
	int k = 5;

	std::forward_list<char> myList = { 'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P' };

	Display(myList);
	k_thElement(k, myList);


	std::cout << "\n\n";
	system("pause");
}