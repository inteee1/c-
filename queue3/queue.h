#ifndef Queue_H
#define Queue_H



class Queue {
private:
	static const int QUEUE_SIZE;
	int *pArr_;
	int size_;
	int front_;
	int rear_;
	
	
public:	
	explicit Queue(int size = Queue::QUEUE_SIZE); 
	~Queue(); 
	Queue(const Queue& rhs);
	Queue& operator=(const Queue& rhs);
	void push(int data);
	int pop();
	
	bool isFull() const;
	bool isEmpty() const;
	
	
};






#endif

