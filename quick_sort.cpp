#include<iostream>
using namespace std;

int a[50];

void qsort(int,int);
int split(int,int);

int main()
{
 int n,i;
 cout<<"enter the no of elements: ";
 cin>>n;
 
 cout<<"Enter "<<n<<" elements:\n";
 for(i=0;i<n;i++)
  cin>>a[i];
  
 qsort(0,n-1);
 
 cout<<"The resultant array: ";
 for(i=0;i<n;i++)
   cout<<a[i]<<" ";
 
 cout<<"\n";
 
 return 0;
}

void qsort(int start,int end)
{
 int s;
 if(start>=end)
  return;
 s=split(start,end);
 qsort(start,s-1);
 qsort(s+1,end);
}

int split(int start,int end)
{
 int p=a[start];
 int i=start,j=end,temp;
 while(i<j)
 {
   while((a[i]<=p) && i<=end)
     i++;
   while(a[j]>p)
     j--;
   if(i<j)
     temp=a[i],a[i]=a[j],a[j]=temp;
 }
 
 a[start]=a[j];
 a[j]=p;
 
 return j;
}
