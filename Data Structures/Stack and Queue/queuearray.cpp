#include<iostream>
#include"queuearray.h"
using namespace std;
queueT* Newqueue()			//new queue is ccreated here and ptr is returned to main
{
	queueT*alpha;
	nodeT*kite;
	kite = new nodeT;
	alpha = new queueT;
	alpha->queue = kite;
	alpha->queue->front = -1;
	alpha->queue->rear = -1;
	cout<<"created successfully"<<endl;
	return alpha;
}
void Enqueue(int a,queueT*queue )		//inserting a value in the queue as per FIFO rule
{

	int cic = ++queue->queue->rear;
	queue->queue->array[cic] = a;
	cout<<"value enqueued successfully"<<endl;
}
int Dequeue(queueT*queue)		//taking out the value from stack
{
	if (queue->queue->front==queue->queue->rear)
	{
		cout<<"error: empty queue ,,so nothing is dere to dequeue";
	}
	queue->queue->front = ++queue->queue->front;
	cout<<endl;
	return queue->queue->front;
}
void Emptyqueue(queueT*queue)			//simply points the queue towards the null..so stack bcomes empty
{
	queue->queue->front = -1;
	queue->queue->rear = -1;
	cout<<"queue has become empty now";
}
bool IsEmpty(queueT*queue)		//returns yes/no as per queue is empty or not
{
	if (queue->queue->front == queue->queue->rear)
	{
		return true;
	}
	else return false;
}
void Freequeue(queueT*queue)		//unallocatesthe memory of queue in the sysytem..after the queue is empty
{
		if(IsEmpty(queue))
		{
			delete queue;
			cout<<"the stack has become free now";
		}	
	else
	{
		cout<<"ERROR: first empty the stack";
	}
	
}
void Printqueue(queueT*queue)			//displays the queue
{
	int i;
	int front = queue->queue->front;
	cout<<front<<endl;
	int rear = queue->queue->rear;
	cout<<rear<<endl;
	if(queue->queue->front == queue->queue->rear)
	{
	cout<<"queue is empty"<<endl;
	return;
	}
	else
	{
	cout<<"the queue is:"<<endl;
	for(i=rear;i>front;i--)
	{
		cout<<queue->queue->array[i]<<endl;
	}	
	}
}
int main()
{
	cout<<"enter your choice to perform the action"<<endl<<endl;
	cout<<"press 0 to exit"<<endl;
	cout<<"press 1 to create a queue data structure"<<endl;
	cout<<"press 2 to push an element in queue"<<endl;
    cout<<"press 3 to pop an element from queue"<<endl;
    cout<<"press 4 to check if queue is empty"<<endl;
    cout<<"press 5 to display the queue"<<endl;
    cout<<"press 6 to free a queue"<<endl;
    cout<<"press 7 to empty the queue"<<endl;
	int a,x,p=1;
	while(p==1)
	{
		cin>>a;
		switch(a)
	{
		case 0: 	p = 0;
					break;
		case 1: 	queueT* queue;
					queue = Newqueue();
					break;
		case 2: 	cout<<endl;
					cout<<"enter the value to push into the queue"<<endl;
					cin>>a;
					Enqueue(a,queue);
					break;	
		case 3:		x = Dequeue(queue);
					queue->queue->front = x;
					break;	
		case 4:		if(IsEmpty(queue))
					{
					cout<<"the queue is empty";
					}			
					else
					{
					cout<<"the queue is not empty";	
					}
					break;
		case 5:		Printqueue(queue);
					break;
		case 6:  	Freequeue(queue);
					break;	
		case 7:		Emptyqueue(queue);
					break;								
	}	
	}

}

