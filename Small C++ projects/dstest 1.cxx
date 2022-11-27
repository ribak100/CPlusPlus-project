#include <iostream>
using namespace std;

template <class T>
     
	class List {

	public:
	
	List<T>& List<T>::operator=(const List& 	rhs)

	{

	if (this != &rhs) {

	makeEmpty();

	const Node<T>* r = rhs.first();

	Node<T>* p = zeroth();

	while (r) {

	insert(r->element, p);

	r = r->next;

	p = p->next;

	}

	

	return *this;
	
	List<T>& List<T>::operator=(const List& 	rhs)

	{

	if (this != &rhs) {

	makeEmpty();

	const Node<T>* r = rhs.first();

	Node<T>* p = zeroth();

	while (r) {

	insert(r->element, p);

	r = r->next;

	p = p->next;

	}

	}

	return *this;

	}


	
	int main() {

	List<int> list;

	list.insert(0, list.zeroth());

	Node<int>* p = list.first();

	for (int i = 1; i <= 10; ++i)

	{

	list.insert(i, p);

	p = p->next;

	}

	std::cout << "printing original list" << 	std::endl;

	list.print();
	for (int i = 0; i <= 10; ++i)

	{

	if (i % 2 == 0)

	list.remove(i);

	}

	std::cout << "printing odd number list" << std::endl; list.print();
	}
	List<int> list2 = list;

	cout << "printing copy constructed list" << endl;

	list2.print();

	List<int> list3;

	list3 = list;

	cout << "printing assigned list" << endl;

	list3.print();

	list.makeEmpty();

	cout << "printing emptied list" << endl;

	list.print();
	for (int i = 0; i <= 10; ++i) {

	if (i % 2 == 0) {

	if (list2.find(i) == NULL)

	cout << "could not find element " << i << endl;

	}

	else {

	if (list2.find(i) != NULL)

	cout << "found element " << i << endl;

	}

	}
	
	
	return 0;
}