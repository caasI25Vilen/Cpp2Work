#pragma once
#include<iostream>

template<typename T>
class ForwardList
{
	struct Node;
	
public:
	ForwardList();
	ForwardList(const ForwardList<T>& other);
	bool isEmpty() const { return head_ == nullptr; }
	void push_front(const T& data);
	void push_rear(const T& data);
	void remove(const T& data);
	bool find(const T& data) const;
	void display() const;
	std::shared_ptr<Node> get_head() const { return head_; }
	std::shared_ptr<Node> get_next() const { return Node::next_; }
	T get_data() const { return Node::data_; }

private:
	struct Node
	{
		T data_;
		std::shared_ptr<Node> next_;
	};
	std::shared_ptr<Node> tmp_;
	std::shared_ptr<Node> tail_;
	std::shared_ptr<Node> head_;



};