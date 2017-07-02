#include<iostream>
using namespace std;
struct node
{
	node*left;
	node*right;
	int data;
};
node* allocatenode(int data)
{
	node*cic = new node;
	cic->left = NULL;
	cic->right = NULL;
	cic->data = data;
	return cic;
}
node* insert(node* root,int data)
{
	if(root == NULL)
	{
		node*cic = allocatenode( data);
		root = cic;
		return root;
	}
	else if(root->data > data)
	{
		root->left = insert(root->left,data);
		return root;
	}
	else
	{
		root->right = insert(root->right,data);
		return root;
	}
}
bool search(node*root,int searchitem)
{
	if(root==NULL)
	{
		return false;
	}
	else if(root->data == searchitem)
	{
		return true;
	}
	else if(root->data >  searchitem)
	{
		search(root->left, searchitem);
	}
	else
	{
		search(root->right, searchitem);
	}
}
int maxoftree(node*root)
{
	int max1;
	if (root==NULL)
	{
		cout<<"ERROR: tree is empty";
	}
	else
	{
		while(root->right!=NULL)
		{
			root = root->right;	
		}
		return root->data; 
	}

}
int minoftree(node*root)
{
		int min;
	if (root==NULL)
	{
		cout<<"ERROR: tree is empty";
	}
	else
	{
		while(root->left!=NULL)
		{
			root = root->left;	
		}
		return root->data; 
	}
}
int heightoftree(node*root)
{
	if(root == NULL)
	{
		return 0;
	}
	else
	{
		int i = heightoftree(root->left);
		int j = heightoftree(root->right);
		if(i>j)
		return(i+1);
		else
		return(j+1);
	}
}
void inorder(node*root)
{
	if (root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<"     ";
	inorder(root->right);
}
void preorder(node*root)
{
	if (root==NULL)
	{
		return;
	}
	cout<<root->data<<"   ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(node*root)
{
	if (root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<"   ";
}
void printlevel(node*root,int level)
{

    if(level == 1)
	{
		cout<<root->data<<"    ";	
	}
	else if (level>1)
	{
		printlevel(root->left, level-1);
		printlevel(root->right, level-1);
	}
}
void levelorder(node*root)
{
	int i,height,level;

		height = heightoftree(root);
		for(int i = 1;i<=height;i++)
		{
			level = i;
			printlevel(root,level);
			cout<<endl;
		}
}
int main()
{
	int a,p=0,data,searchitem;
	node*root = NULL;
	while (p==0)
	{
		cout<<"enter the no to perform action"<<endl;
		cin>>a;
		switch (a)
		{
		case 0: exit;
				p=1;
				break;
		case 1: cout<<"enter the value you want to insert"<<endl;
				cin>>data;
				root = insert(root, data);
				break;
		case 2: cout<<"enter the value you want to search in the tree"<<endl;
				cin>>searchitem;
				search(root,searchitem);
				if(search(root,searchitem))
				{
					cout<<"the value is in the tree"<<endl;
				}
				else
				{
					cout<<"no such value in the tree"<<endl;
				}
				break;
		case 3: int max ;
				max = maxoftree(root);	
				cout<<"the maximum value in the tree is--------  "<<endl;
				cout<<max<<endl;
				break;
		case 4:	int min;
				min = minoftree(root);
				cout<<"the minimum value in the tree is------  "<<endl;
				cout<<min<<endl;
				break;	
		case 5: int height;
				height = heightoftree(root);
				cout<<"the height of the tree is ----------"<<endl;
				cout<<height<<endl;
				break;	
		case 6: cout<<"the tree in inorder traversal is:-------  "<<endl;
				inorder(root);
				break;
		case 7:	cout<<"the tree in preorder traversal is:----------"<<endl;
				preorder(root);
				break;	
		case 8: cout<<"the tree in post orde traversal is: --------"<<endl;
				postorder(root);
				break;
		case 9:	cout<<"the tree in level order traversal is: ---------"<<endl;
				int level;
				cout<<"enter the level at which you want to print the tree"<<endl;
				cin>>level;
				printlevel(root,level);
				break;		
		case 10: cout<<"the level order traversal is--------------------"<<endl;
				 levelorder(root);
				 break;										
		}
	}
	

	
}
