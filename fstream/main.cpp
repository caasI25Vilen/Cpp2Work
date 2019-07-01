#include<iostream>
#include<fstream>



int main()
{
	std::fstream file;
	file.open("Reading File");

	int arr[12];
	if (file.is_open())
	{
		for (int i = 0; i < 12; ++i)
		{
			file >> arr[i];
		}
		for (int i = 0; i < 12; ++i)
			std::cout << arr[i] << " ";
	}
	else
		std::cerr << "Error...!!!\n";
	file.close();

	std::cout << "\n\n";
	system("pause");
}