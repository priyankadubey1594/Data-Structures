#include<iostream>
using namespace std;
struct nodeT
{
	int value;
	nodeT *next;
};
struct stackT
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



