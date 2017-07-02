#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"enter the elements of the string"<<endl;
	char string[100];
	cin.getline(string,100);
	char name[100];
	for(i=0;i<100;i++)
	{
		name[i] = string [i];
	}
	cout<<name;
	system("pause");
	return 0;
}
