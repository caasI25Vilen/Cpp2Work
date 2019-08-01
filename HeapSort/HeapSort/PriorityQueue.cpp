#include "PriorityQueue.h"

template <typename T>
void PriorityQueue<T>::push(const T& element)
{
	base_[++numberOfElements_] = element;
	int current = numberOfElements_;
	int parent;
	T temp;
	while (current > 0)
	{
		parent = (current / 2.0f) - 0.5f;

		if (base_[parent] <= base_[current])
			return;
		temp = base_[current];
		base_[current] = base_[parent];
		base_[parent] = temp;

		current = parent;
	}
}

template<typename T>
void PriorityQueue<T>::pop()
{
	base_[0] = base_[numberOfElements_--];

	if (isEmpty())
		return;

	int current = 0;
	int minChildIndex;
	T temp;

	while ((minChildIndex = (current << 1) + 1) <= numberOfElements_)
	{
		if (minChildIndex + 1 <= numberOfElements_ && base_[minChildIndex + 1] <= base_[minChildIndex])
			++minChildIndex;
		if (base_[current] > base_[minChildIndex])
		{
			temp = base_[current];
			base_[current] = base_[minChildIndex];
			base_[minChildIndex] = temp;
		}

		current = minChildIndex;
	}
}
