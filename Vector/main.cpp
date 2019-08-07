#include<iostream>
#include "Vector.cpp"


int main()
{
	Vector<int> vec;
	vec.push(5);
	vec.push(5);
	vec.push(5);

	int y = vec[10000];

	Vector<char> charVec;

	charVec.pop();

	Vector<float> fVec(3, 0.5f);
	std::cout << fVec.front() << std::endl << fVec.back() << std::endl;
	fVec.pop();
	fVec.pop();
	fVec.pop();

	std::cout << "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n";
	fVec.pop();
	fVec.back();
	fVec.front();

	system("pause");
}