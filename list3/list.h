#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <string>

/*struct Node;
Node *createNode(int data, Node *next);*/
class Node {
friend class List;
private:
	int data_;
	Node *next_;
	Node(int data, Node *next);
public:

	
} ;

class List {

friend std::ostream& operator<<(std::ostream& out, const List& rhs);
private:
	Node *ptr_;
	List(const List& );
	List& operator=(const List& );
	std::ostream& print(std::ostream& out, const std::string& delin = ", ") const;
	
public:
	List();
	~List();
	

	void insertFirst(int data);
	void insert(int prevData, int data);
	void remove(int data);
};



#endif
