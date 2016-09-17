#include<iostream>
#include<stdio.h>

using namespace std;

struct node   //abstract data type created
{
	int rollno;
	char name;
	double marks;
	node*next;
};

node*head;//declared global

node* AllocateNode()   //creating a pointer to point to a node
{
	node*ptr;
	ptr = new node;
	cout<<"enter the rollno of student"<<endl;
	cin>>ptr-> rollno;
	cout<<"enter the name of student"<<endl;
	cin>>ptr-> name;
	cout<<"enter the marks"<<endl;
	cin>>ptr-> marks;
	ptr-> next=NULL;
	cout<<"node created successfully"<<endl;
	return ptr;
	
}
void PerpendNode()
{
	int n;
	cout<<"how many nodes u want to insert at the beginning"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(head==NULL)   //list is empty
		{
			node*temp;
			temp = AllocateNode();
			head = temp;
		}
		else    //list has atleast one element
		{
			node*temp2;
			temp2 = AllocateNode();
			node*n;
			n = temp2;
			temp2->next = head;
			head = n;
		}
	}
}
void InsertNode()    //inserting the node at Nth location
{
	int n;
	node*temp;
	temp = head;
	cout<<"enter the number at which u want to insert the linked list"<<endl;
	cin>>n;
	for(int i=0;i<n-2;i++)
	{
		temp = temp->next;
	}
	node*alpha = temp->next;
	node*q;
	q = temp;
	node*ext = AllocateNode();
	temp->next = ext;
	ext->next = alpha;
}
void SearchList()
{
	int n;
	cout<<"enter the node which u want to print";
	cin>>n;
	node*temp6;
	temp6=head;
	for(int i=1;i<n;i++)
	{
		temp6 = temp6->next;    //traversal of linkedlist
	}
	cout<<"your search has been completed";	
}
void PrintNode()
{
	int n;
	cout<<"enter the node which u want to print";
	cin>>n;
	node*temp6;
	temp6=head;
	for(int i=1;i<n;i++)
	{
		temp6 = temp6->next;
	}
	cout<<temp6->rollno;      //at end of loop the value of i is also useful
	cout<<endl<<temp6->name;
	cout<<endl<<temp6->marks;
}
void PrintList()
{
	node*temp;
	temp = head;
	while(temp->next!=NULL)
	{
		if(temp == head)
		{
			cout<<temp->rollno<<"   "<<temp->name<<"   "<<temp->marks<<endl;
			temp = temp->next;
		}
		else
		{
			cout<<temp->rollno<<"   "<<temp->name<<"   "<<temp->marks<<endl;
			temp = temp->next;
		}
		
	}
			cout<<temp->rollno<<"   "<<temp->name<<"   "<<temp->marks<<endl;
	
}
void AppendNode()    //attaching node in the end
{
	int n;
	cout<<"enter the no of nodes u want to attach in the end"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		if(head==NULL)
		{
			node*temp;
			temp = AllocateNode();
			head = temp;
		}
		else
		{
			node*temp3;
			temp3 = AllocateNode();
			node*p;
			p = temp3;
			temp3->next = head;
			head = p;
		}
	}
}
void DeleteANode(int n)    //deleting a node at Nth position
{
	node*temp;
	temp = head;
	int i=1;
	if(n!=1)
	{
	while ((i<n-1)&&(temp->next!=NULL))
	{
		temp=temp->next;
		i++;
	}
		temp->next = temp->next->next;   // not pointing a node...means it is deleted
}
	else
	{
			head = temp->next;
	}
}
void DeleteFirstNode()
{	
	node*temp;
	temp = head;
	int i=1, n=1; //special case of nth form
	if(n!=1)
	{
	while ((i<n-1)&&(temp->next!=NULL))
	{
		temp=temp->next;
		i++;
	}
		temp->next = temp->next->next;
}
	else
	{
			head = temp->next;
	}
}
	
void DeleteLastNode()
{	node*temp;
	temp = head;
	int i = 1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		i+=1;
	}
	
	cout<<i;
	DeleteANode(i);
}
void FindMthToLast()
{
	node*temp = head;
	int x, m, i=1 ;
	cout<<"enter the value of M you want to find ! "<<endl;//mth to last means  n-l+1 th from beginning
	cin>>m;
	while(temp->next!=NULL) //calculating current size of linked list
	{
		temp = temp->next;
		i++;
	}
	x = i-m+1;
	node*temp6;
	temp6=head;
	for(int j=1;j<x;j++)
	{
		temp6 = temp6->next;
	}
	cout<<temp6->rollno;
	cout<<endl<<temp6->name;
	cout<<endl<<temp6->marks;
		
}
void ListIntersection()
{
	int a,w;
	node*temp1, *temp2, *temp3;
	head = AllocateNode();
	cout<<"for the first linked list"<<endl;
	cout<<"one node allocated for you"<<endl;
	cout<<"Press 0 to exit and enter the second.....1 to perpendNode,......2 to AppendNode,.......3 to PrintList"<<endl;
	
	int j=1;
	while(j==1)
	{
		cin>>a;
		switch(a)
	{
		case 0: j=0;
				break;
		case 1: PerpendNode();
				break;
		case 2: AppendNode();
				break;
		case 3: PrintList();
				break;
	}	
	}
	temp1=head;
	cout<<"for the second link list"<<endl;
	head =  AllocateNode();
	cout<<"one node is allocate for you"<<endl;
	cout<<"Press 1 to perpendNode,......2 to AppendNode,.......3 to PrintList"<<endl;

	int i =1;
	while(i==1)
	{
		cin>>w;
		switch(w)
	{
		case 0: i=0;
				break;
		case 1: PerpendNode();
				break;
		case 2: AppendNode();
				break;
		case 3: PrintList();
				break;
	}	
	}
	temp2 = head;
	cout<<"the intersection of these two linked lists is ....."<<endl<<endl;
	while(temp1->next!=NULL)
	{
		temp3=temp2;
		while(temp3->next!=NULL)
		{
		if( (temp1->rollno==temp3->rollno) &&(temp1->name==temp3->name)&&(temp1->marks==temp3->marks))
		{
			cout<<temp1->rollno<<endl;
			cout<<temp1->name<<endl;          //comparing the all elements of linked list Naive method
			cout<<temp1->marks<<endl;
			temp3 = temp3->next;
			break;
		}
		else 
		{
			temp3 = temp3->next;
			
		}
			
		}
		if(temp3->next==NULL)
		{
		if( (temp1->rollno==temp3->rollno) &&(temp1->name==temp3->name)&&(temp1->marks==temp3->marks))
		{
			cout<<temp1->rollno<<endl;
			cout<<temp1->name<<endl;          //comparing the all elements of linked list Naive method
			cout<<temp1->marks<<endl;
		}	
		}
		temp1 = temp1->next;
		if(temp1->next==NULL){
			temp3=temp2;
		while(temp3->next!=NULL)
		{
		if( (temp1->rollno==temp3->rollno) &&(temp1->name==temp3->name)&&(temp1->marks==temp3->marks))
		{
			cout<<temp1->rollno<<endl;
			cout<<temp1->name<<endl;          //comparing the all elements of linked list Naive method
			cout<<temp1->marks<<endl;
			temp3 = temp3->next;
			break;
		}
		else 
		{
			temp3 = temp3->next;
			
		}
			
		}
		if(temp3->next==NULL)
		{
		if( (temp1->rollno==temp3->rollno) &&(temp1->name==temp3->name)&&(temp1->marks==temp3->marks))
		{
			cout<<temp1->rollno<<endl;
			cout<<temp1->name<<endl;          //comparing the all elements of linked list Naive method
			cout<<temp1->marks<<endl;
		}	
		}
		}
	}
}
void ReverseList()
{
	node *p1, *p2, *p3; 						// three continuous nodes, previous, current and next
        if (head == NULL)						// Linked List is empty
        {
            cout<<"List is empty"<<endl;
            return;
        }
        if (head->next == NULL)					// Only one node
        {
            return;
        }  
        p1 = head;								//start node
        p2 = p1->next;							//second node
        p3 = p2->next;							//third node
        p1->next = NULL;						//pointing to NULL as it is last node
        p2->next = p1;							//second last node.
        while (p3 != NULL)						//traverse
        {
            p1 = p2;							//second node
            p2 = p3;							//third node
            p3 = p3->next;						//next node
            p2->next = p1;         				//p2 does the work of adjusting the poiters.
		}
        head = p2;
        node *temp;
        temp=head;
        while(temp->next!=NULL){
        	cout<<temp->rollno;
			cout<<temp->name;
			cout<<temp->marks;
        	temp=temp->next;
		}
		cout<<temp->rollno;
		cout<<temp->name;
		cout<<temp->marks;
}
int main()
{
	head = AllocateNode();
	cout<<" Welcome....Enter your choice to perform action"<<endl;
	cout<<"0: exit the loop"<<endl;
	cout<<"1: A node has been allocated for you"<<endl;
	cout<<"2: PerpendNode"<<endl;
	cout<<"3: AppendNode"<<endl;
	cout<<"4: InsertNode"<<endl;
	cout<<"5: SearchListcout"<<endl;
	cout<<"6: PrintNode"<<endl;
	cout<<"7: PrintList"<<endl;
	cout<<"8: DeleteFirstNode"<<endl;
	cout<<"9: DeleteLastNode"<<endl;
	cout<<"10: DeleteANode"<<endl;
	cout<<"11: ReverseList"<<endl;
	cout<<"12: ListUnion"<<endl;
	cout<<"13: ListIntersection"<<endl;
	cout<<"14: FindMthToLast"<<endl;
	int a,n,i=1;
	
	while(i==1)
	{
		cin>>a;
		switch(a)
		{
			case 0: i=0;
				    break;
			case 1: cout<<"A node has been allocated for you";
					break;
			case 2: PerpendNode();
		        	break;
			case 3: AppendNode();
					break;
			case 4: InsertNode();
					break;
			case 5: SearchList();
					break;
			case 6: PrintNode();
					break;
			case 7: PrintList();
					break;
			case 8: DeleteFirstNode();
					break;
			case 9: DeleteLastNode();
					break;
			case 10: cout<<"enter the number of node you want to delete";
				  	cin>>n;
				  	DeleteANode(n);
					break;
			case 11: ReverseList();
					break;
		/*case 12: ListUnion();*/
			case 13: ListIntersection();
					break;
			case 14: FindMthToLast();
			  		break;
	}
}

	return 0;
}
