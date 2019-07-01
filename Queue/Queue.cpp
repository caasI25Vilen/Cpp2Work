#include"Queue.h"
#include<iostream>

template<typename T>
Queue<T>::Queue()
	: maxSize_(10), size_(0), front_(-1), rear_(-1), queue_(new T[maxSize_]) { }

template<typename T>
Queue<T>::Queue(const int size, const T & item)
	: maxSize_(size), size_(size), rear_(size - 1), front_(0), queue_(new T[maxSize_])
{
	for (int i = 0; i < maxSize_; ++i)
		queue_[i] = item;

}

template<typename T>
Queue<T>::Queue(const Queue<T>& otherQueue)
{
	maxSize_ = otherQueue.maxSize_;
	size_ = otherQueue.size_;
	front_ = otherQueue.front_;
	rear_ = otherQueue.rear_;

	queue_ = new T[maxSize_];
	memcpy(queue_, otherQueue.queue_, maxSize_);
}

template<typename T>
Queue<T>::Queue(Queue<T>&& otherQueue)
{
	maxSize_ = otherQueue.maxSize_;
	size_ = otherQueue.size_;
	front_ = otherQueue.front_;
	rear_ = otherQueue.rear_;
	queue_ = otherQueue.queue_;
	otherQueue.queue_ = nullptr;
	otherQueue.maxSize_ = 0;
	otherQueue.size_ = 0;
	otherQueue.rear_ = -1;
	otherQueue.front_ = -1;
}

template<typename T>
Queue<T>::~Queue()
{
	delete[] queue_;
	queue_ = nullptr;
}

template<typename T>
Queue<T>& Queue<T>::operator=(const Queue<T>& otherQueue)
{
	if (this == &otherQueue)
		return *this;
	delete[] queue_;

	maxSize_ = otherQueue.maxSize_;
	size_ = otherQueue.size_;
	front_ = otherQueue.front_;
	rear_ = otherQueue.rear_;

	queue_ = new T[maxSize_];
	memcpy(queue_, otherQueue.queue_, maxSize_);

	return *this;
}

template<typename T>
Queue<T>& Queue<T>::operator=(Queue<T>&& otherQueue)
{
	if (this == &otherQueue)
		return *this;

	delete[] queue_;

	maxSize_ = otherQueue.maxSize_;
	size_ = otherQueue.size_;
	front_ = otherQueue.front_;
	rear_ = otherQueue.rear_;
	queue_ = otherQueue.queue_;
	otherQueue.queue_ = nullptr;
	otherQueue.maxSize_ = 0;
	otherQueue.size_ = 0;
	otherQueue.rear_ = -1;
	otherQueue.front_ = -1;
	return *this;

}

template<typename T>
bool Queue<T>::operator==(const Queue<T>& other) const
{
	return (maxSize_ == other.maxSize_	&&
		size_ == other.size_		&&
		front_ == other.front_		&&
		rear_ == other.rear_
		);
}

template<typename T>
bool Queue<T>::operator!=(const Queue<T>& other) const
{
	return !(*this == other);
}

template<typename T>
T & Queue<T>::operator[](int index) const
{
	if (index < 0 || index >= size_)
		std::cout << "Invalid Index...!!!" << std::endl;
	else
		return queue_[index];
}

template<typename T>
bool Queue<T>::isEmpty() const
{
	return (front_ == -1 && rear_ == -1);
}

template<typename T>
bool Queue<T>::isFull() const
{
	return (rear_ + 1) % maxSize_ == front_;
}

template<typename T>
void Queue<T>::Enqueue(const T & item)
{
	if (isFull())
	{
		std::cout << "Overflow...!!!" << std::endl;
		return;
	}
	else if (isEmpty())
		front_ = rear_ = 0;
	else
		rear_ = (rear_ + 1) % maxSize_;

	queue_[rear_] = item;
	++size_;
}

template<typename T>
void Queue<T>::Dequeue()
{
	if (isEmpty())
	{
		std::cout << "Underflow...!!!" << std::endl;
		return;
	}
	else if (front_ == rear_)
		front_ = rear_ = -1;
	else
		front_ = (front_ + 1) % maxSize_;
	--size_;
}

template<typename T>
unsigned int Queue<T>::getSize() const
{
	return size_;
}

template<typename T>
unsigned int Queue<T>::getMaxSize() const
{
	return maxSize_;
}

template<typename T>
int Queue<T>::getFrontIndex() const
{
	return front_;
}

template<typename T>
int Queue<T>::getRearIndex() const
{
	return rear_;
}

template<typename T>
T & Queue<T>::peek() const
{
	if (isEmpty())
		std::cout << "Underflow...!!!" << std::endl;
	else
		return queue_[front_];
}