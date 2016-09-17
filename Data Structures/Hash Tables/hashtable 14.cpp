#include<iostream>
using namespace std;
struct account
{
	int roll;
	char name[10];
};
struct node
{
	int key;
	account* account;
};
struct hash
{
	struct node* hashtable[9];
};
hash* classtable = new hash;
int hashfunction(int roll)
{
	return roll%9;
}
account* allocatenode()
{
	account*temp = new account;
	cout<<"enter the roll no    ";
	cin>>temp->roll;
	cout<<"enter the name     ";
	cin>>temp->name;
	return temp;
}
void insert()
{
	int key,roll,i;
	account*temp = allocatenode();
	roll = temp->roll;
	key = hashfunction(roll);
	for(i=0;i<9;i++)
	{
		if (key == classtable->hashtable[i]->key)
		{
			classtable->hashtable[i]->account = temp;
		}
	}
}
void printlist()
{
	cout<<"beta"<<endl;
	for(int i=0;i<9;i++)
	{
		if (classtable->hashtable[i]->account == NULL)
		{
			cout<<classtable->hashtable[i]->key<<"         "<<"NULL"<<"           "<<"NULL"<<endl;
		}
		else
		{
			if (classtable->hashtable[i]->account != NULL)
			cout<<classtable->hashtable[i]->key<<"        "<<classtable->hashtable[i]->account->name<<"       "<<classtable->hashtable[i]->account->roll<<endl;		
		}
	}
	cout<<"alpha";
}
int main()
{
	int p = 1;
	int a;
	for(int i=0;i<9;i++)
	{
		classtable->hashtable[i] = new node; 
		classtable->hashtable[i]->key = i;
		classtable->hashtable[i]-> account = NULL;     //providing the key to the hash table
	}
	cout<<"you have created the hash table now"<<endl;
	while(p==1)
	{
		cout<<"enter the no as per your instruction"<<endl;
		cout<<endl<<endl<<endl;
		cout<<" Press 1 to insert an element in the hash table"<<endl;
		cout<<" Press 2 to print the hash table"<<endl;
		cin>>a;
		switch(a)
		{
			case 0: p = 0;
					break;
			case 1: insert();
					cout<<"the value has been entered successfully"<<endl;
					break;
			case 2: cout<<"the hash table is somewhat like dis:"<<endl;
					printlist();
					break;					
		}
	}
		
}

