#include<iostream>
using namespace std;
int main()
{
	int i,j,n,p,q;
	char string1[100];
	char string2[100];
	cout<<"enter the first string"<<endl;
	cin.getline(string1,100);
		for(i=0;i<100;i++)
		{
			if(string1[i] == '\0')
		{
			cout<<"the length of string1 is "<<i<<""<<endl;
			break;
		}
		}
	p=i;	
	cout<<"enter the second string"<<endl;
	cin.getline(string2,100);
		for(i=0;i<100;i++)
		{
			if(string2[i] == '\0')
			{
			cout<<"the length of string1 is "<<i<<""<<endl;
			q=i;
			break;
			}
		}
	
	char name[p+q+1];
	for(i=0;i<p;i++)
	{
		name [i]=string1[i];
	}
	for(i=p,j=0;i<p+q-1,j<q;i++,j++)
	{
		cout<<string2[j]<<endl;
		name[i]=string2[j];	
	}
	cout<<"the concatenated string is :"<<name<<"";	
}
