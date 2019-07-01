#pragma once

template<typename T>
class Queue
{
public:
	//ctors	& dtor
	Queue();
	Queue(const int size, const T& item = T());
	Queue(const Queue<T>& otherQueue);
	Queue(Queue<T>&& otherQueue);
	~Queue();

	//operators
	Queue<T>& operator=(const Queue<T>& otherQueue);
	Queue<T>& operator=(Queue<T>&& otherQueue);
	bool operator==(const Queue<T>& other) const;
	bool operator!=(const Queue<T>& other) const;
	T& operator[](int index) const;

	//methods
	bool isEmpty() const;
	bool isFull() const;
	void Enqueue(const T& item);
	void Dequeue();
	unsigned int getSize() const;
	unsigned int getMaxSize() const;
	int getFrontIndex() const;
	int getRearIndex() const;
	T& peek() const;

private:
	unsigned int maxSize_;
	unsigned int size_;
	int front_;
	int rear_;
	T* queue_;
};