#include"Queue.h"
#include"Queue.cpp"
#include<iostream>

void Printing(Queue<int>& obj)
{
	std::cout << "////////////////////////////////////\n\n";
	std::cout << "isEmpty() -> " << obj.isEmpty() << "\n\n";
	std::cout << "isFull() -> " << obj.isFull() << "\n\n";
	std::cout << "getSize() -> " << obj.getSize() << "\n\n";
	std::cout << "getMaxSize() -> " << obj.getMaxSize() << "\n\n";
	std::cout << "getFrontIndex() -> " << obj.getFrontIndex() << "\n\n";
	std::cout << "getRearIndex() -> " << obj.getRearIndex() << "\n\n";
	std::cout << "peek() -> " << obj.peek() << "\n\n";
	std::cout << "////////////////////////////////////\n\n\n";
}
void Printing(Queue<char>& obj)
{
	std::cout << "////////////////////////////////////\n\n";
	std::cout << "isEmpty() -> " << obj.isEmpty() << "\n\n";
	std::cout << "isFull() -> " << obj.isFull() << "\n\n";
	std::cout << "getSize() -> " << obj.getSize() << "\n\n";
	std::cout << "getMaxSize() -> " << obj.getMaxSize() << "\n\n";
	std::cout << "getFrontIndex() -> " << obj.getFrontIndex() << "\n\n";
	std::cout << "getRearIndex() -> " << obj.getRearIndex() << "\n\n";
	std::cout << "peek() -> " << obj.peek() << "\n\n";
	std::cout << "////////////////////////////////////\n\n\n";
}

int main()
{
	std::cout << "Hello...!!!!\n\n" << std::endl;

	Queue<int> A(10, -50);
	std::cout << A.peek() << std::endl;
	Queue<int> B = A;
	Queue<int> C;
	Queue<char> D(50);
	Queue<char> E;

	if (B == A)
		std::cout << "B == A \n";
	else
		std::cout << "B != A \n";

	if (C == A)
		std::cout << "C == A \n";
	else
		std::cout << "C != A \n";

	std::cout << "\n\n";

	Printing(A);
	Printing(B);
	Printing(C);

	E.Enqueue('C');
	E.Enqueue('+');
	E.Enqueue('+');
	E.Enqueue('2');
	E.Enqueue('W');
	E.Enqueue('o');
	E.Enqueue('r');
	E.Enqueue('k');
	Printing(E);

	int x = E.getSize();

	for (int i = 0; i < x; ++i)
	{
		std::cout << E.peek();
		E.Dequeue();
	}
	std::cout << "\n\n";

	Printing(E);

	std::cout << "\n\n";
	system("pause");
}