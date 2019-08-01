#pragma once

template <typename T>
class PriorityQueue
{
public:
	PriorityQueue(const int& size = 100);
	virtual ~PriorityQueue();

	bool isEmpty() const;
	bool isFull() const;
	T& top() const;

	void push(const T& element);
	void pop();

private:

	T* base_;
	int numberOfElements_;
	int size_;
};

template <typename T>
inline	PriorityQueue<T>::PriorityQueue(const int& size)
	: size_(size), numberOfElements_(-1), base_(new T[size]) {};

template<typename T>
inline PriorityQueue<T>::~PriorityQueue()
{
	delete[] base_;
	base_ = nullptr;
}

template<typename T>
inline bool PriorityQueue<T>::isEmpty() const
{
	return numberOfElements_ == -1;
}

template<typename T>
inline bool PriorityQueue<T>::isFull() const
{
	return numberOfElements_ == size_;
}

template<typename T>
inline T& PriorityQueue<T>::top() const
{
	return base_[0];
}

