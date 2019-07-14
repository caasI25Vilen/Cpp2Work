#include"ForwardList.cpp"

template<typename T>
void k_thElement(ForwardList<T>& List, int& k)
{
	auto ptr1 = List.get_head();
	auto ptr2 = List.get_head();
	while (ptr1 != nullptr)
	{
		ptr1 = ptr1->List.get_next();
		if (k == 0)
			ptr2 = ptr2->List.get_next();
		else
			--k;
	}
	std::cout << "[ " << ptr2->List.get_data() << " | " << *ptr2 << " ]" << '\n';

}

int main()
{
	ForwardList<int> list;
	for (int i = 0; i < 11; ++i)
		list.push_rear(i + 1);

	int k = 3;


	k_thElement<int>(list, k);

	system("pause");
}