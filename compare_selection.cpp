#include<iostream>
using namespace std; 

int ksmall(int a[],int n)
{
	int i,j,temp,min,count=0;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			count++;
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;

	}
	return count;

}

int main()
{
	int n,i;
	int a[10];
	cout<<"enter the no of elements : ";
	cin>>n;
	cout<<"enter the array elements :\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<" no of comparision: "<<ksmall(a,n);
	cout<<"\n";
	
	return 0;
}



