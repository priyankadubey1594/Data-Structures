#include<iostream>
struct nodeT
{
	int array[100];
	int front;
	int rear;
};
struct queueT
{
	nodeT* queue;

};
queueT* Newqueue();
void Enqueue(int a,queueT*queue );
int Dequeue(queueT*queue);
void Emptyqueue(queueT*queue);
bool IsEmpty(queueT*queue);
void Freequeue(queueT*queue);
void Printqueue(queueT*queue);

