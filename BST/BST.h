#pragma once

template<typename T>
class BinarySearchTree
{
public:
	BinarySearchTree();
	BinarySearchTree(const BinarySearchTree& other);
	//BinarySearchTree(BinarySearchTree&& other);
	~BinarySearchTree();

	const T& findMin() const;
	const T& findMax() const;
	bool contains(const T& item) const;
	bool isEmpty() const;

	void makeEmpty();
	void insert(const T& item);
	//void insert(T&& item);
	void remove(const T& item);

	//BinarySearchTree& operator=(const BinarySearchTree& other);
	//BinarySearchTree& operator=(BinarySearchTree&& other);
	struct BinaryNode
	{
		T element_;
		BinaryNode* left_;
		BinaryNode* right_;

		BinaryNode(const T& element, BinaryNode* lt, BinaryNode* rt)
			: element_(element), left_(lt), right_(rt) { }

		/*
		BinaryNode(T&& element, BinaryNode* lt, BinaryNode* rt)
			: element_{ std::move(element) }, left_{ lt }, right_{ rt } { }
		*/
	};
private:


	BinaryNode* root_;

	void insert(const T& item, BinaryNode*& t);
	//void insert(T&& item, BinaryNode*& t);
	void remove(const T& item, BinaryNode*& t);
	BinaryNode* findMin(BinaryNode* t) const;
	BinaryNode* findMax(BinaryNode* t) const;
	bool contains(const T& item, BinaryNode* t) const;
	void makeEmpty(BinaryNode*& t);
	BinaryNode* clone(BinaryNode* t) const;

};
 