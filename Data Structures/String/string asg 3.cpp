#include<iostream>
using namespace std;
int main()
{
	int k,sum=0,sum1=0,sum2=0,sum3=0,n=1000;
	char name[n];
	cout<<"enter the elements of the string"<<endl;	
	cin.getline(name,1000);
	for(k=0;k<n;k++){
		cout<<name[k];
	}
	for(k=0;k<n;k++)
	{
		if(name[k]=='\0') break;
		
		if((name[k]=='a')||(name[k]=='e')||(name[k]=='i')||(name[k]=='o')||(name[k]=='u'))
		{
			sum = sum +1 ;
		}
		
		else if(name[k]==' ')
		{
			sum2 = sum2 + 1;
		}	

		else if(name[k]>='0'&&name[k]<='9')
		{
			cout<<name[k];
			cout<<k;
			sum3 = sum3 +1;
		}
		
		else
		{
			if(name[k]>='a'&&name[k]<='z')
			{
				sum1 = sum1 + 1;	
			}
			
		}
	}
		cout<<"no of vowels is "<<sum<<""<<endl;
		cout<<"no of consonants is "<<sum1<<""<<endl;
		cout<<"no of digits is "<<sum3<<""<<endl;
		cout<<"no of spaces is "<<sum2<<""<<endl;
		system("pause");
		return 0;	
	
}
