#include<stdio.h>
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

void main()
{
	int k,y,n,i;
	int a[10];
	printf("enter the no of elements  :");
	scanf("%d",&n);
	printf("enter the array elements :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf(" no of comparisions=%d",ksmall(a,n));
}



