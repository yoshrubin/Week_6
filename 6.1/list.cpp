#include "list.h"

RoundList::Link::Link(int val, Link* nxt) : value(val), next(nxt) {}
RoundList::Link::Link(const Link& source) : value(source.value), next(source.next) {}

//--------------------------------------------
//  class List implementation
//--------------------------------------------
RoundList::RoundList() : head(NULL) {}

RoundList::~RoundList()
{
	clear();
}

void RoundList::clear()
{
	while (head)
		removeFirst();
}
bool RoundList::isEmpty() const
{
	// test to see if the List is empty
	// List is empty if the pointer to the head
	// Link is 0

	return head == 0;
}

void RoundList::add(int val)
{
	if (!head) // head==NULL
	{
		head = new Link(val, 0);
		head->next = head;
		return;
	}
	Link* p = head;
	while (p->next != head)
		p = p->next;
	//Add a new value to the front of a Linked List
	head = new Link(val, head);
	p->next = head;
}

void RoundList::addToEnd(int val)
{
	if (!head) // head==NULL
	{
		head = new Link(val, 0);
		head->next = head;
		return;
	}
	Link* p = head;
	while (p->next != head)
		p = p->next;
	p->next = new Link(val, head);
}

int RoundList::search(int n)
{
	if (n < 0) throw "ERROR! n < 0";
	Link* p = head;
	// loop to test each element
	for (int i = 0; i < n; i++)
		p = p->next;
	return p->value;
}

void RoundList::removeFirst()
{
	// make sure there is a first element
	if (isEmpty())
		throw "the List is empty, no Elements to remove";
	if (head->next == head)
	{
		delete head;
		head = NULL;
		return;
	}
	// save pointer to the removed node
	Link* first = head;
	Link* p = first->next;
	// update first and last
	while (p->next != first)
		p = p->next;
	head = first->next;
	p->next = head;
	// recover memory used by the first element
	delete first;
}
