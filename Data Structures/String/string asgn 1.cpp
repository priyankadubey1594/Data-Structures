#include<iostream>
using namespace std;
int main()
{
	int n=500,i;
	cout<<"enter the string"<<endl;
	char name[n];
	cin.getline(name,500);
		for(i=0;i<n;i++)
		{
			if(name[i] == '\0')
		{
			cout<<"the length of string is "<<i<<""<<endl;
			break;
		}
	
		}
	system("pause");
	return 0;
}
