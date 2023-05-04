#ifndef Queue_H
#define Queue_H



class Queue {
private:
	static const int QUEUE_SIZE;
	int *pArr_;
	int size_;
	int front_;
	int rear_;
	Queue(const Queue& rhs);
	Queue& operator=(const Queue& rhs);
public:	
	explicit Queue(int size = Queue::QUEUE_SIZE); // 생성자 constructor, Queue s = 100 X
	~Queue(); // 소멸자 destructor
	
	void push(int data);
	int pop();
	
	bool isFull() const;
	bool isEmpty() const;
	
	
};






#endif

