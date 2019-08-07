#include "Vector.h"
#include<iostream>

template <class T>
Vector<T>::Vector()
	: capacity_(100), size_(0), flag_(true), vector_(new T[capacity_])
{
	std:: cout << "Default ctor\n";
}

template <class T>
Vector<T>::Vector(int size,const T& item)
	: capacity_(size), size_(size), flag_(false), vector_(new T[capacity_])
{
	std::cout << "Param ctor\n";
	for (int i = 0; i < capacity_; ++i)
		vector_[i] = item;
}

template <class T>
Vector<T>::Vector(const Vector<T>& src)
{
	std::cout << "Copy ctor\n";
	capacity_ = src.capacity_;
	size_ = src.size_;
	vector_ = new T[capacity_];
	
	for (int i = 0; i < capacity_; ++i)
		vector_[i] = src.vector_[i];
}

template <class T>
Vector<T>::Vector(Vector<T>&& src)
{
	std::cout << "Move ctor\n";
	capacity_ = src.capacity_;
	size_ = src.size_;
	vector_ = src.vector_;
	src.vector_ = nullptr;
	src.capacity_ = 0;
	src.size_ = 0;
}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& src)
{
	std::cout << "copy assignment\n";
	if (this == &src)
		return *this;
	delete[] vector_;
	
	capacity_ = src.capacity_;
	size_ = src.size_;
	vector_ = new T[capacity_];

	for (int i = 0; i < capacity_; ++i)
		vector_[i] = src.vector_[i];

	return *this;
}

template<class T>
Vector<T>& Vector<T>::operator=(Vector<T>&& src)
{
	std::cout << "move assignment\n";
	if (this == &src)
		return *this;
	delete[] vector_;

	capacity_ = src.capacity_;
	size_ = src.size_;
	vector_ = src.vector_;
	src.vector_ = nullptr;
	src.capacity_ = 0;
	src.size_ = 0;

	return *this;
}

template<class T>
Vector<T>::~Vector()
{
	std::cout << "Destructor \n";
	delete vector_;
	vector_ = nullptr;
}

template<class T>
void Vector<T>::push(const T & item)
{
	if (size_ < capacity_)
		vector_[size_++] = item;
	else if (flag_)
	{
		resize(size_ * 2);
		vector_[size_++] = item;
	}
	else if(!flag_)
		std::cout << "vector is full\n";
}
