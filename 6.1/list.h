#include <iostream>

using namespace std;

class RoundList
{
protected:
	//--------------------------------------------
	//  inner class link
	//  a single element for the linked List
	//--------------------------------------------
	class Link
	{
	public:
		// constructor
		Link(int linkValue, Link * nextPtr);
		Link(const Link &);
		// data areas
		int value;
		Link * next;
	}*head;	//end of class Link
public:
	// CTOR
	RoundList();
	// DTOR
	~RoundList();
	// funcs
	void add(int);
	void addToEnd(int);
	void removeFirst();
	int search(int);
	void clear();
	bool isEmpty() const;
};
