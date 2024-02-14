#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int i;
	int size;
	cin>>size;
	cout<<"Enter the size of Array:";
	cout<<"Enter the array value :";
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<size ;i++)
	{
		cout<<"Array value :"<<a[i]<<endl;
	}		
}

