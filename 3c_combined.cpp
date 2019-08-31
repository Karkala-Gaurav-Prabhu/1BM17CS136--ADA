#include<iostream>
using namespace std;

int arr[20]; 

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

int selection_sort(int a[],int n)
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

int bubble_sort(int array[], int n)
{
	int i,j,swap,count;
	
	for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
		count++;
      if (array[j] > array[j+1]) /* For decreasing order use < */
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }
}

int main()
{
  int n,i,x,y,z;
  
  cout<<"Enter the size of array: ";  
  cin>>n;
  cout<<"Enter the elements:\n";
  for(i=0;i<n;i++)
    cin>>arr[i];
  
  x=merge_sort(arr,0,n-1);  
  y=selection_sort(arr,n);
  z=bubble_sort(arr,n);
  
  cout<<"Sorted array:"; 
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

	cout<<"\n no of comparisions in Merge Sort : "<<x;
	cout<<"\n no of comparisions in Selection Sort: "<<y;
	cout<<"\n no of comparisions in Bubble Sort: "<<z;
	cout<<"\n";
  
  return 0;
}
