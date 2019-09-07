#include<iostream>
using namespace std;

int check(int a[10][10],int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j]>1 || a[i][j]<0)
			{
				cout<<"The Matrix should only consist of 1's and 0's\n";
				return 0;
			}
			else if(i == j && a[i][j] == 1)
			{
				cout<<"The value at diagonals should be 0\n";
				return 0;
			}
		}
	}
	cout<<"Matrix is valid\n";
	return 1;
}

int main(int argc, char **argv)
{
	int a[10][10], n, i, j;
	cout<<"Enter the size of the square matrix based on number of nodes in the graph: ";
	cin>>n;
	cout<<"Enter a sqaure matrix of 1's and 0's to represent an undirected graph: ";
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			cout<<i<<","<<j<<"->";
			cin>>a[i][j];
		}
	}
	
	if(check(a,n))
	{
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				if(a[i][j] == 1)
				{
					cout<<"Node "<<i<<" and "<<j<<" are connected\n"; // considering node names start from 0 onwards
				}
			}
		}
	}
}
