#include<iostream>
#include"PriorityQueue.cpp"

template <typename T>
void HeapSort(T arr[], int size)
{
	PriorityQueue<T> pq;

	for (int i = 0; i < size; ++i)
		pq.push(arr[i]);

	for (int i = 0; i < size; ++i)
	{
		arr[i] = pq.top();
		pq.pop();
	}
}

int main()
{
	int arr[] = { 16,14,12,10,8,6,4,3,0,-50,-123,-200 };
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		std::cout << arr[i] << "  ";
	std::cout << "\n\n";

	HeapSort<int>(arr, sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
		std::cout << arr[i] << "  ";
	std::cout << "\n\n";

	system("pause");
}