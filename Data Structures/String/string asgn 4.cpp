#include<iostream>
using namespace std;
char rev(char string[100]);
int main()
{
	int n = 100,i,p;
	char string[100];
	cin.getline(string,100);
		for(i=0;i<100;i++)
		{
			if(string[i] == '\0')
		{
			cout<<"the length of string is "<<i<<""<<endl;
			break;
		}
	p=i;
	cout<<"enter the string";
	cin.getline(string,100);
	cout<<"the string is "<<string<<"";
	cout<<"u want the string to b reversed";
	cout<< rev(string);
	system("pause");
	return 0;
}
char rev(char string[100])
{
	int i,j,temp,n;
	for(i=0;i<=p/2;i++)
	{
		temp = string[i];
		string[i] = string[p-i]
		string[p-i] = temp;
	}
	for(i=0;;i<=p/2;i++)
	{
	cout<<"the revrsed string is: "<<string[i]<<"";
	}	
}
