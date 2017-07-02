#include<iostream>
using namespace std;
int main()
{
	int n=8,i,sum=0;
	char x;
	char name[n];
	cout<<"enter the elements of the string";	
	cin.getline(name,n);
	cout<<"enter the character whos frequency u want"<<endl;
	cin>>x;
	for(i=0;i<n;i++)
		{
			
			cout<<name[i];
			cout<<x;
			if(name[i]==x)
			{
				sum = sum + 1;
		 	}
		 	else if(name[i]=='\0')
		 	{
		 		break;
			}
				
		}
	cout<<"the frequency of "<<x<<" is "<<sum<<"";
	system("pause");
	return 0;
	
	
	
	
}
