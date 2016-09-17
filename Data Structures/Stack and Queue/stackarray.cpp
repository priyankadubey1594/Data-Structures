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
stackT* NewStack()		//new stack is ccreated here and ptr is returned to main
{
	stackT*alpha;
	nodeT*kite;
	kite = new nodeT;
	alpha = new stackT;
	alpha->stack = kite;
	alpha->stack->head = -1;
	cout<<"created successfully"<<endl;
	return alpha;
}
void Push(int a,stackT*stack )	//inserting a value in the stack as per LIFO rule
{

	int cic = ++stack->stack->head;
	stack->stack->array[cic] = a;
	cout<<"value pushed successfully"<<endl;
}
int Pop(stackT*stack)			//taking out the value from stack
{
	if (stack->stack->head==-1)
	{
		cout<<"error: empty stack ,,so nothing is dere to Pop";
	}
	stack->stack->head = --stack->stack->head;
	cout<<endl;
	cout<<"popped out";
	return stack->stack->head;
}
bool IsEmpty(stackT*stack)		//returns yes/no as per stack is aempty or not
{
	if (stack->stack->head == -1)
	{
		return true;
	}
	else return false;
}
void EmptyStack(stackT*stack)		//simply points the stack towards the null..so stack bcomes empty
{
	stack->stack->head = -1;
	cout<<"stack has become empty now";
}
void FreeStack(stackT*stack)	//unallocatesthe memory of stack in the sysytem..after the stack is empty
{
	if(stack->stack->head == -1)
	{
		int i;
		int head = stack->stack->head;
		cout<<head;
		for(i=head;i>=0;i--)
	{
		delete &(stack->stack->array[i]);
		break;
	}
	cout<<"the stack has been freed";
	stack->stack->head = -1;
	}	
	else
	{
			cout<<"Error: first empty the stack";
	}
}

void PrintStack(stackT*stack)		//displays the stack
{
	int i;
	int head = stack->stack->head;
	if(stack->stack->head==-1)
	{
	cout<<"stack is free now"<<endl;
	return;
	}
	cout<<"the stack is:"<<endl;
	for(i=head;i>=0;i--)
	{
		cout<<stack->stack->array[i]<<endl;
	}
}
int main()
{
	cout<<"enter your choice to perform the action"<<endl<<endl;
	cout<<"press 0 to exit"<<endl;
	cout<<"press 1 to create a stack data structure"<<endl;
	cout<<"press 2 to push an element in stack"<<endl;
    cout<<"press 3 to pop an element from stack"<<endl;
    cout<<"press 4 to check if stack is empty"<<endl;
    cout<<"press 5 to display the stack"<<endl;
    cout<<"press 6 to free a stack"<<endl;
    cout<<"press 7 to empty the stack"<<endl;
	int a,x,p=1;
	while(p==1)
	{
		cin>>a;
		switch(a)
	{
		case 0: 	p = 0;
					break;
		case 1: 	stackT* stack;
					stack = NewStack();
					break;
		case 2: 	cout<<endl;
					cout<<"enter the value to push into the stack"<<endl;
					cin>>a;
					Push(a,stack);
					break;	
		case 3:		x = Pop(stack);
					stack->stack->head = x;
					cout<<stack->stack->head<<endl;
					break;	
		case 4:		if(IsEmpty(stack))
					{
					cout<<"the stack is empty";
					}			
					else
					{
					cout<<"the stack is not empty";	
					}
					break;
		case 5:		PrintStack(stack);
					break;
		case 6:  	FreeStack(stack);
					break;	
		case 7:		EmptyStack(stack);
					break;								
	}	
	}

}

