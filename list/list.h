#ifndef LIST_H
#define LIST_H

typedef struct node {
	int data;
	struct node *next;
} Node;

class List {
private:
	Node *ptr;
	
public:
	List();
	~List();
	void printList();

	void insertFirstNode(int data);
	void insertNode(int prevData, int data);
	void deleteNode(int data);
};



#endif
