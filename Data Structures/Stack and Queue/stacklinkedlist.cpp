#include<iostream>
#include"stacklinkedlist.h"
using namespace std;
stackT* NewStack()		//new stack is ccreated here and ptr is returned to main
{
	stackT*alpha;
	alpha = new stackT;
	cout<<"created successfully";
	return alpha;
}
void Push(int a, stackT*stack)		//inserting a value in the stack as per LIFO rule
{
	nodeT *cic = new nodeT;
	cic->value = a;
	cout<<"pushed successfully";
	cic->next = stack->stack;
	stack->stack = cic;
}
int Pop(stackT*stack)		//taking out the value from stack
{
	if(stack->stack == NULL)
	{
		cout<<"the list is empty";
	}else{
		stack->stack = stack->stack->next;
		cout<<"popped out";
	}
}
bool IsEmpty(stackT*stack)		//returns yes/no as per stack is aempty or not
{
	if(stack->stack == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void EmptyStack(stackT*stack)		//simply points the stack towards the null..so stack bcomes empty
{
	if(stack->stack == NULL)
	{
		cout<<"the list is already empty";
	}else{
		stack->stack = NULL;
		cout<<"stack is empty now";
	}
}

void FreeStack(stackT*stack)	//unallocatesthe memory of stack in the sysytem..after the stac is empty
{
	if(IsEmpty(stack))
		{
			delete stack;
			cout<<"the stack has become free now";
		}	
	else
	{
		cout<<"ERROR: first empty the stack";
	}

}
void PrintStack(stackT*stack)		//displays the stack
{
	nodeT*cic = new nodeT;
	cic = stack->stack;
	cout<<endl;
	if(cic == NULL)
	{
		cout<<"stack is empty so nothing to print";
	}
	else
	{
		while(cic->next!=NULL)
			{
				cout<<cic->value<<endl;
				cic = cic->next;
			}
							cout<<cic->value<<endl;

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
	stackT* stack;
	while(p==1)
	{
		cin>>a;
		switch(a)
	{
		case 0: 	p = 0;	//to exit the loop
					break;
		case 1: 	stack = NewStack();
					stack->stack = NULL;
					break;
		case 2: 	cout<<endl;
					cout<<"enter the value to push into the stack"<<endl;
					cin>>a;
					Push(a,stack);
					break;	
		case 3:		x = Pop(stack);
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

