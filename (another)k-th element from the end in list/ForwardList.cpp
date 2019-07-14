#include"ForwardList.h"

template<typename T>
ForwardList<T>::ForwardList()
	: head_(nullptr)/*, tmp_(nullptr), tail_(nullptr)*/ {}

template<typename T>
ForwardList<T>::ForwardList(const ForwardList<T>& other)
{
	std::shared_ptr<Node> tmp_head = other.head_;

	while (other.tmp_head != nullptr)
	{
		this->push_rear(tmp_head->data_);
		tmp_head = tmp_head->next_;
	}
}

template<typename T>
void ForwardList<T>::push_front(const T& data)
{
	tmp_ = std::make_shared<Node>(Node());
	tmp_->data_ = data;

	if (isEmpty())
	{
		tmp_->next_ = nullptr;
		tail_ = tmp_;
	}
	else
		tmp_->next_ = head_;

	head_ = tmp_;
}

template<typename T>
void ForwardList<T>::push_rear(const T& data)
{
	tmp_ = std::make_shared<Node>(Node());
	tmp_->data_ = data;
	tmp_->next_ = nullptr;

	if (isEmpty())
		head_ = tmp_;
	else
		tail_->next_ = tmp_;

	tail_ = tmp_;
}

template<typename T>
void ForwardList<T>::remove(const T & data)
{
	tmp_ = head_;
	std::shared_ptr<Node> prev_;
	while (tmp_->next_ != nullptr && tmp_->data_ != data)
	{
		prev_ = tmp_;
		tmp_ = tmp_->next_;
	}
	if (tmp_->data_ == data)
	{
		prev_->next_ = tmp_->next_;
		tmp_->next_ = nullptr;
	}
	else if (tmp_->next_ == nullptr)
		std::cerr << "Error: Data not found...!!!\n";
}

template<typename T>
bool ForwardList<T>::find(const T& data) const
{
	std::shared_ptr<Node> head_tmp;
	for (head_tmp = head_; head_tmp != nullptr; head_tmp = head_tmp->next_)
		if (head_tmp->data_ == data)
			return true;
	if (head_tmp == nullptr)
		return false;
}

template<typename T>
void ForwardList<T>::display() const
{
	if (isEmpty())
		std::cout << "List is Empty...!!!\n";
	else
	{
		std::shared_ptr<Node> head_tmp;
		for (head_tmp = head_; head_tmp != nullptr; head_tmp = head_tmp->next_)
			std::cout << "[ " << head_tmp->data_ << " | " << head_tmp->next_ << " ] ----> ";
		std::cout << "nullptr\n\n";
	}
}
