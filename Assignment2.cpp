#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fun(int a[], int n,int k)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			return 1;
		}
	}
	return -1;
}
int main(int argc, char **argv)
{
	int t;
	cin>>t;
	int n,k;
	for(int i=0;i<t;i++)
	{
		cin>>n>>k;
		int a[n]={0};
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		cout<<fun(a,n,k)<<endl;
		
	}
	return 0;
	
}