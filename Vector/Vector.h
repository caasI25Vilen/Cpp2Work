#pragma once


template <class T>
class Vector
{
public:
	Vector();
	Vector(int size, const T& item = T());
	Vector(const Vector<T>& src);
	Vector(Vector<T>&& src);
	Vector<T>& operator=(const Vector<T>& src);
	Vector<T>& operator=(Vector<T>&& src);
	~Vector();
	void push(const T& item);
	void pop();
	T& front();
	T& back();
	bool empty() const;
	int size() const;
	int capacity() const;
	T& operator[](int index);

private:
	int capacity_;
	int size_;
	bool flag_;
	T* vector_;
	void resize(int newsize);
};

template<class T>
inline void Vector<T>::pop()
{

	if (size_ == 0)
	{
		try
		{
			throw "Vector is Empty...!!!\n";
		}
		catch (const char* exp)
		{
			std::cout << "Error: " << exp;
		}
	}
	else
		--size_;
}

template<class T>
inline T & Vector<T>::front()
{

	if (size_ == 0)
	{
		try
		{
			throw "Vector is Empty...!!!\n";
		}
		catch (const char* exp)
		{
			std::cout << "Error: " << exp;
		}
	}
	else
		return vector_[0];
}

template<class T>
inline T & Vector<T>::back()
{
	if (size_ == 0)
	{
		try
		{
			throw "Vector is Empty...!!!\n";
		}
		catch (const char* exp)
		{
			std::cout << "Error: " << exp;
		}
	}
	else
		return vector_[size_ - 1];
}

template<class T>
inline bool Vector<T>::empty() const
{
	return size_ == 0;
}

template<class T>
inline int Vector<T>::size() const
{
	return size_;
}

template<class T>
inline int Vector<T>::capacity() const
{
	return capacity_;
}

template<class T>
inline T & Vector<T>::operator[](int index)
{
	if (index < 0 || index >= size_)
	{
		try
		{
			throw "Invalid Index...!!!\n";
		}
		catch (const char* exp)
		{
			std::cout << "Error: " << exp;
		}
	}
	else
		return vector_[index];

}

template<class T>
inline void Vector<T>::resize(int newsize)
{
	T* tmp = new T[newsize];
	for (int i = 0; i < newsize; ++i)
		tmp[i] = vector_[i];
	size_ = newsize;
	delete[] vector_;
	vector_ = tmp;
}
