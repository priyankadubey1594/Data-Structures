#include<iostream>
using namespace std;
int main()
{
	int i,j,sum=0,p,q,k,n,summ4=0,sum1=0,summ1=0,sum2=0,summ2=0,sum3=0,summ3=0,sum4=0;
	cout<<"enter the string"<<endl;
	char string1[100];
	cin.getline(string1,100);
	for(i=0;i<100;i++)
		{
			if(string1[i] == '\0')
		{
			p=i;
			cout<<"the length of string is "<<i<<""<<endl;
			break;
		}
	
		}
	cout<<"ur input string is "<<string1<<""<<endl;
	char string2[100];
	cin.getline(string2,100);
	for(i=0;i<100;i++)
		{
			q=i;
			if(string2[i] == '\0')
		{
			cout<<"the length of string is "<<i<<""<<endl;
			break;
		}
	
		}
	cout<<"ur input string is "<<string2<<""<<endl;
	for(k=0;k<n;k++)
	{
		if(string1[k]=='\0') break;
		
		if((string1[k]=='a')||(string1[k]=='e')||(string1[k]=='i')||(string1[k]=='o')||(string1[k]=='u'))
		{
			sum1 = sum1 +1 ;
			cout<<sum1;
		}
		
		
	 	else if(string1[k]==' ')
		{
			sum2 = sum2 + 1;
			cout<<sum2;
		}	
	
		else if(string1[k]>='0'&&string1[k]<='9')
		{
			cout<<string1[k];
			cout<<k;
			sum3 = sum3 +1;
			cout<<sum3;
		}
		
		
		else
		{
			if(string1[k]>='a'&&string1[k]<='z')
			{
				sum4 = sum4 + 1;	
			}
			cout<<sum4;
		}
		
	}
	for(k=0;k<n;k++)
	{
		if(string2[k]=='\0') break;
		
		if((string2[k]=='a')||(string2[k]=='e')||(string2[k]=='i')||(string2[k]=='o')||(string2[k]=='u'))
		{
			summ1 = summ1 +1 ;
			cout<<summ1;
		}
		
		
		else if(string2[k]==' ')
		{
			summ2 = summ2 + 1;
			cout<<summ2;
		}	
		
		else if(string2[k]>='0'&&string2[k]<='9')
		{
			summ3 = summ3 +1;
			cout<<summ3;
		}
		else
		{
			if(string2[k]>='a'&&string2[k]<='z')
			{
				summ4 = summ4 + 1;	
			}
			cout<<summ4;	
		}
		
	}
	if((sum4==summ4)&&(sum1==summ1)&&(sum2==summ2)&&(sum3==summ3))
	{
		cout<<"ANAGRAMS";
	}
	else
	{
		cout<<"NO ANAGRAMS";
	}
	system("pause");
	return 0;
}
	
