#include <iostream>
using namespace std;

int main()
{
	
	//A linked list node is represented below
/*	template <class T>

	class Node {

	public:

	Node(const T& e = T(), Node *n = NULL) :

	 element(e), next(n) { }

	T element;

	Node *next;

	};
	
*/
	
	// linked list implementation
/*	template <class T>

	class List {

	private:

	Node<T> *head;

	public:

	List() : head(NULL) {}

	};
	*/
	
	//is empty
/*	template <class T>

	class List {

	private:

	Node<T> *head;

	public:

	List() : head(NULL) {}

	bool isEmpty() const;

	};
	*/
	
	//alternative is empty
	
/*	template <class T>

	bool List<T>::isEmpty() const {

	return head == NULL;

	};
	*/
	
	//first(): returns the first node of the list

/*	template <class T>

	class List {

	private:

	Node<T> *head;

	public:

	List() : head(NULL) {}

	bool isEmpty() const;

	Node<T>* first();

	};
	
*/	
	//insert(const T& data, Node<T>* p): inserts a new element containing data after node p

/*	template <class T>

	class List {

	private:

	Node<T> *head;

	public:

	...

	void insert(const T& data, Node<T>* p);

	...

	};
	
*/	
	//other insert case
	
/*		template <class T>

	void List<T>::insert(const T& data, 	Node<T>* p) {

	if (p != NULL) { // case 1

	Node<T>* newNode = new Node<T>(data, p->next);

	p->next = newNode;

	}

	else { // case 2

	Node<T>* newNode = new Node<T>(data, head);

	head = newNode;

		}

	}
*/

/// We must make some changes to support the dummy head version:

/*	template <class T>

	class List {

	private:

	Node<T> *dummyHead;

	public:

	List() {

	dummyHead = new Node<T>(T(), NULL);

		}

	};
*/	
	
	//altrernative dummy head version
	
/*	template <class T>

	class List {

	private:

	Node<T> *dummyHead;

	public:

	Node<T>* zeroth() {

	return dummyHead;

	}

	Node<T>* first() {

	return dummyHead->next;

	}

	const Node<T>* first() const {

	return dummyHead->next;

	}

	bool isEmpty() const {first() == NULL;}

	};
*/
	//searching for an element
/*	template <class T>

	Node<T>* List<T>::find(const T& data) {

	Node<T>* p = first();

	while (p) {

	if (p->element == data)

	return p;

	p = p->next;

	}

	return NULL;

	}
*/
//removing an element
/*	template <class T>

	class List {

	private:

	Node<T> *dummyHead;

	public:

	...

	Node<T>* findPrevious(const T& data);

	...

	};
*/
//Finding Previous Node

/*	template <class T>

	Node<T>* List<T>::findPrevious(const T& data) {

	Node<T>* p = zeroth();

	while (p->next) {

	if (p->next->element == data)

	return p;

	p = p->next;

	}

	return NULL;

	}

*/
//can now remove element
/*	template <class T>

	void List<T>::remove(const T& data) {

	Node<T>* p = findPrevious(data);

	if (p) {

	Node<T>* tmp = p->next;

	p->next = tmp->next;

	delete tmp;

	}

*/	}


//Printing All Elements

/*	template <class T>

	void List<T>::print() const

	{

	const Node<T>* p = first();

	while(p) {

	std::cout << p->element << std::endl;

	p = p->next;

	}

	}
*/
//Removing All Elements We can make the list empty by deleting all nodes {except the dummy head
/*	template <class T>

	class List {

	private:

	Node<T> *dummyHead;

	public:

	...

	void makeEmpty();

	...

	};
*/
//Destructor


/*	template <class T>

	class List {

	private:

	Node<T> *dummyHead;

	public:

	...

	~List();

	...

	};

*/
//Assignment Operator

/*	template <class T>

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
*/

//Copy Constructor Finally, we must implement the copy constructor

/*	template <class T>

	class List {

	private:

	Node<T> *dummyHead;

	public:

	...

	List(const List& rhs);

	...

	};

*/
//Testing the Linked List Class Let's check if our implementation works by implementing a test driver file

/*	int main() {

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

*/




	return 0;
}
