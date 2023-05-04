#include <iostream>
#include "queue.h"

const int Queue::QUEUE_SIZE = 100;

int main()
{
	Queue q1(100);
	Queue q2;
	// Queue s; =(100), Queue q1 = 100; X, Queue q1 = q2 X, q1 = q2 X
	
	q1.push(100);
	q1.push(200);
	q1.push(300);
	

	std::cout << "q1 1st pop() : " << q1.pop() << std::endl;
	std::cout << "q1 2nd pop() : " << q1.pop() << std::endl;
	std::cout << "q1 3rd pop() : " << q1.pop() << std::endl;
	

	for (int i = 1; i <= 3 ; ++i){
		if (!q2.isFull()) {
			q2.push(i);
			}
		}
	while (1) {
		if (q2.isEmpty()) {
			break;
			}
		std::cout << "q2 pop () : " << q2.pop() << std::endl;
		}
	return 0;
}
