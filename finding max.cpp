#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int main()
{
	int n;
	int max=0;
	int a[n][n];
	cout<<"enter the size of array: ";
	cin>>n;
	cout<<"\n enter the values: ";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
	
	}
	
	max=a[0][0];
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
				if(a[i][j]>=max)
				{
					max=a[i][j];
				}
		}
	
	
	}
	
	cout<<max;
	
	
}
