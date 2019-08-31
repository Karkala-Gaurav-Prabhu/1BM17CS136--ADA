#include<stdio.h>
int arr[20];       

int main()
{
  int n,i,x;
  
  printf("Enter the size of array\n");  
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  
  x=merge_sort(arr,0,n-1);  
  
  printf("Sorted array:"); 
  for(i=0;i<n;i++)
    printf("      %d",arr[i]);

	printf("\n no of comparisions :%d",x);
  
  return 0;
}

int merge_sort(int arr[],int low,int high)
{
  int mid,x;
  if(low<high)
  {
    mid=(low+high)/2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    x=merge(arr,low,mid,high);
  }
  
  
  return x;
}

int merge(int arr[],int l,int m,int h)
{
  int arr1[10],arr2[10],count=0;;  
  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;

  for(i=0;i<n1;i++)
    arr1[i]=arr[l+i];
  for(j=0;j<n2;j++)
    arr2[j]=arr[m+j+1];

  arr1[i]=9999;  
  arr2[j]=9999;

  i=0;j=0;
  for(k=l;k<=h;k++)  
  {
	  count++;
    if(arr1[i]<=arr2[j])
      arr[k]=arr1[i++];
    else
      arr[k]=arr2[j++];
  }
  
  return count;
}