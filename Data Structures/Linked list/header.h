#include<iostream>
using namespace std;
struct node   //abstract data type created
{
	int rollno;
	char name;
	double marks;
	node*next;
};
node* AllocateNode();
void PerpendNode();
void InsertNode() ;
void SearchList();
void PrintNode();
void PrintList();
void AppendNode() ;
void DeleteANode(int n) ;
void DeleteFirstNode();
void DeleteLastNode();
void FindMthToLast();
void ListIntersection();
void ReverseList();
node*head;//declared global
