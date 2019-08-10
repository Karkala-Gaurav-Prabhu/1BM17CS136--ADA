#include <iostream>
#include <stdio.h>
#include <time.h>
using namespace std;

int main(int argc, char **argv)
{
	int a[],n,max;
	clock_t start,end;
	double time_taken;
	start = clock();
	
	clrscr();
	
	cout<<"Enter Array length: ";
	cin>>n;
	
	for(int i=0; i<n; i++)
	{
		cout<<"Element "<<i<<": ";
		cin>>a[i];
	}
	
	
	
	end = clock();
	time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
	cout<<"Time taken: "<<time_taken;
}
