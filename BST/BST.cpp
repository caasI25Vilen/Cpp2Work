#include"BST.h"

/*
 *	Definition of Public Methods
 */

template<typename T>
BinarySearchTree<T>::BinarySearchTree()
	: root_(nullptr) {}

template<typename T>
BinarySearchTree<T>::BinarySearchTree(const BinarySearchTree& other)
{
	root_ = clone(other.root_);
}

template<typename T>
BinarySearchTree<T>::~BinarySearchTree()
{
	makeEmpty();
}

template<typename T>
const T & BinarySearchTree<T>::findMin() const
{
	return findMin(root_)->element_;
}

template<typename T>
const T & BinarySearchTree<T>::findMax() const
{
	return findMax(root_)->element_;
}

template<typename T>
bool BinarySearchTree<T>::contains(const T & item) const
{
	return contains(item,root_);
}

template<typename T>
bool BinarySearchTree<T>::isEmpty() const
{
	if (root_ == nullptr)
		return true;
	else
		return false;
}

template<typename T>
void BinarySearchTree<T>::makeEmpty()
{
	makeEmpty(root_);
}

template<typename T>
void BinarySearchTree<T>::insert(const T & item)
{
	insert(item, root_);
}

template<typename T>
void BinarySearchTree<T>::remove(const T & item)
{
	remove(item, root_);
}



/*
 *	Definition of Private Methods
 */

template<typename T>
void BinarySearchTree<T>::insert(const T& item, BinaryNode*& t)
{
	if (t == nullptr)
		t = new BinaryNode(item, nullptr, nullptr);
	else if (item < t->element_)
		insert(item, t->left_);
	else if (t->element_ < item)
		insert(item, t->right_);
	else
		;
}


template<typename T>
void BinarySearchTree<T>::remove(const T& item, BinaryNode*& t)
{
	if (t == nullptr)
		return;
	if (item < t->element_)
		remove(item, t->left_);
	else if (t->element_ < item)
		remove(item, t->right_);
	else if (t->left_ != nullptr && t->right_ != nullptr) // 2 children
	{
		t->element_ = findMin(t->right_)->element_;
		remove(t->element_, t->right_);
	}
	else
	{
		BinaryNode* oldNode = t;
		t = (t->left_ != nullptr) ? t->left_ : t->right_;
		delete oldNode;
	}
}

template<typename T>
typename BinarySearchTree<T>::BinaryNode* BinarySearchTree<T>::findMin(BinaryNode* t) const
{
	if (t == nullptr)
		return nullptr;
	if (t->left_ == nullptr)
		return t;
	return findMin(t->left_);

	// without recursion
	/*
	if (t != nullptr)
		while(t->left_ != nullptr)
			t = t->left_;
	return t;
	*/
}

template<typename T>
typename BinarySearchTree<T>::BinaryNode* BinarySearchTree<T>::findMax(BinaryNode* t) const
{
	if (t == nullptr)
		return nullptr;
	if (t->right_ == nullptr)
		return t;
	return findMax(t->right_);

	// without recursion
	/*
	if (t != nullptr)
		while(t->right_ != nullptr)
			t = t->right_;
	return t;
	*/
}

template<typename T>
bool BinarySearchTree<T>::contains(const T& item, BinaryNode* t) const
{
	if (t == nullptr)
		return false;
	else if (item < t->element_)
		return contains(item, t->left_);
	else if (t->element_ < item)
		return contains(item, t->right_);
	else
		return true;
}

template<typename T>
void BinarySearchTree<T>::makeEmpty(BinaryNode*& t)
{
	if (t != nullptr)
	{
		makeEmpty(t->left_);
		makeEmpty(t->right_);
		delete t;
	}
	t = nullptr;
}

template<typename T>
typename BinarySearchTree<T>::BinaryNode* BinarySearchTree<T>::clone(BinaryNode* t) const
{
	if (t == nullptr)
		return nullptr;
	else
		return new BinaryNode{ t->element,clone(t->left_),clone(t->right_) };
}


