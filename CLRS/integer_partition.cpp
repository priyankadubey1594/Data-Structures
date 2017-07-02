#include <iostream>
#include <string.h>

using namespace std;
void partition_of_integer(int number);
void print_array(int arraya[]);

int main()
{
    cout<<"dhfjsdbfh"<<endl;
    partition_of_integer(4);
    cout<<"bye"<<endl;
}

void partition_of_integer(int number)
{
    cout<<"djhbcjhd"<<endl;
	int partitions[number];
	int no_of_ones_before;
	int index = 0;
	partitions[0] = number;
	for(int i =1;i<number;i++)
	{
        cout<<"io"<<endl;
		partitions[i]=0;
	}
	print_array(partitions);
	while(true)
	{
		if((number!=1) && (partitions[0]==1))
		{
			break;
		}

		index = number-1;
		int no_of_ones_before = 0;
		while(partitions[index] <=1)
		{
            cout<<"pi"<<partitions[index];
			if(partitions[index]==1)
			{
                cout<<"got one";
				no_of_ones_before = no_of_ones_before + 1;
			}
			index = index -1;
		}
		cout<<"remval: "<<no_of_ones_before<<endl;
		cout<<"kval: "<<index<<endl;

		partitions[index] = partitions[index] -1;
		no_of_ones_before = no_of_ones_before + 1;

		if(partitions[index] >= no_of_ones_before)
		{
            cout<<"if"<<endl;
			partitions[index+1] = no_of_ones_before;
		}
		else
		{
            cout<<"else"<<endl;
			partitions[index+1] = partitions[index];
			index = index+1;
			cout<<"qwerty"<<index<<endl;
			while(no_of_ones_before>partitions[index])
			{
                cout<<"cd"<<endl;
				no_of_ones_before = no_of_ones_before - partitions[index];
			}
			partitions[index+1] = no_of_ones_before;
		}
		print_array(partitions);
	}

}

void print_array(int arraya[])
{
    for(int i = 0; i<4;i++)
    {
        cout<<arraya[i]<<" ";
    }
    cout<<endl;
}

