#include<iostream>
using namespace std;
void display(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"\narray["<<i<<"]="<<array[i];
	}
}

int main ()
{
	int size;
	
	cout<<"\nEnter size of an array:";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++)
	{
		array[i]=0;
	}
	int input;
	start:
	cout<<"\nENter 1 for index 0 and enter 2 for last index";
	cout<<"\nNEter 3 for any k index!";
//	cout<<"Enter 4"
	cout<<"\nEnetr 4 to delete At 0 from an array!";
	cout<<"\nEnter 5 to display an array!";
	cin>>input;

	if(input==1)
	{
//		cout<<"\nEnter array["<<0<<"]:";
		cin>>array[0];
		for(int i=0;i<size;i++)
		cout<<array[i]<<" ";
		goto start;
	}
	else if(input==2)
	{
//		cout<<"\nENter Array ["<<size-1<<"]:";
		cin>>array[size-1];
		for(int i=0;i<size;i++)
		cout<<array[i]<<" ";
		goto start;
	}
	else if(input==3)
	{
		int k;
		cout<<"\nENter index between 0-"<<size-1<<" :";
		cin>>k;
		cout<<"\nEnter array["<<k<<"] :";
		cin>>array[k];
		goto start;
	}
	else if(input==4)
	{
	    int pos;
	    cout<<"\nENter the index number in array you want to del:";
	    cin>>pos;
	    for(int i=pos;i<size;i++)
	    {
	        array[pos]=array[i+1];
	        
	    }
	    array[size-1]=0;
		goto start;
	}
	else if(input==5)
	{
		display(array,size);
	goto start;
	}
	
}
