#pragma once
#include<iostream>

template<typename T>
class ForwardList
{
public:
	ForwardList();
	ForwardList(const ForwardList<T>& other);
	bool isEmpty() const { return head_ == nullptr; }
	void push_front(const T& data);
	void push_rear(const T& data);
	void remove(const T& data);
	bool find(const T& data) const;
	void display() const;
	auto& get_head() const { return getHead(); }
	auto& get_next() const { return getNext(); }
	T& get_data() const { return getData(); }

private:
	struct Node
	{
		T data_;
		std::shared_ptr<Node> next_;
	};

	std::shared_ptr<Node> head_;
	std::shared_ptr<Node> tmp_;
	std::shared_ptr<Node> tail_;

	std::shared_ptr<Node>& getHead() const { return head_; }
	std::shared_ptr<Node>& getNext() const { return Node::next_; }
	T& getData() const { return Node::data_; }


};