#include<iostream>
using namespace std;

typedef struct node				// Node for linked list
{
	int data;
	node *next;
}nodeT;

typedef struct{					// struct for Queue
	nodeT *front=NULL;			// In the start, front = rear = NULL
	nodeT *rear=NULL;
}queue;
// DECLARATIONS 
queue *NewQueue();				// Initialising the Queue				
void Enqueue(queue *q, int value);					// Function to add a node to Queue
int Dequeue(queue *q);								// Function to delete a node to Queue
void EmptyQueue(queue *q);							// Function to empty Queue
void FreeQueue(queue *q);							// Function to Free memory of Queue
bool isEmpty(queue *q);								// Function to check if Queue is empty
nodeT *NewNode();
void display(queue *q);								// Function to display nodes of Queue

