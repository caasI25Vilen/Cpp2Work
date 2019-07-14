#include"ForwardList.cpp"

template<typename T>
T& k_thElement(const ForwardList<T>& List, int k)
{
	auto ptr1 = List.get_head();
	auto ptr2 = List.get_head();
	while (ptr1 != nullptr)
	{
		ptr1 = ptr1->next_;
		if (k == 0)
			ptr2 = ptr2->next_;
		else
			--k;
	}
	
	return ptr2->data_;
}

int main()
{
	ForwardList<int> list;
	for (int i = 0; i < 8; ++i)
		list.push_rear(i + 1);

	int k = 5;
	
	list.display();
	std::cout << k_thElement<int>(list, k);
	std::cout << "\n\n";

	system("pause");
}