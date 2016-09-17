#include<iostream>
using namespace std;
struct nodeT		//node ADT created
{
	int array[100];
	int head;
};
struct stackT		 //stack ADT created
{
	nodeT* stack;
};

stackT* NewStack();
void Push(int a, stackT*stack);
int Pop(stackT*stack);
bool IsEmpty(stackT*stack);
void EmptyStack(stackT*stack);
void FreeStack(stackT*stack);
void PrintStack(stackT*stack);



