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

Skip to content
Pull requests
Issues
Marketplace
Explore
@Karkala-Gaurav-Prabhu

1
0

    0

Karkala-Gaurav-Prabhu/1BM17CS136--ADA
Code
Issues 0
Pull requests 0
Projects 0
Wiki
Security
Insights
Settings
1BM17CS136--ADA/
1

#include<stdio.h>

2

int arr[20];       

3

​

4

int main()

5

{

6

  int n,i,x;

7

  

8

  printf("Enter the size of array\n");  

9

  scanf("%d",&n);

10

  printf("Enter the elements:");

11

  for(i=0;i<n;i++)

12

    scanf("%d",&arr[i]);

13

  

14

  x=merge_sort(arr,0,n-1);  

15

  

16

  printf("Sorted array:"); 

17

  for(i=0;i<n;i++)

18

    printf("      %d",arr[i]);

19

​

20

        printf("\n no of comparisions :%d",x);

21

  

22

  return 0;

23

}

24

​

25

int merge_sort(int arr[],int low,int high)

26

{

27

  int mid,x;

28

  if(low<high)

29

  {

30

    mid=(low+high)/2;

31

​

32

    merge_sort(arr,low,mid);

33

    merge_sort(arr,mid+1,high);

34

    x=merge(arr,low,mid,high);

35

  }

36

  

37

  

38

  return x;

39

}

40

​

41

int merge(int arr[],int l,int m,int h)

42

{

43

  int arr1[10],arr2[10],count=0;;  

44

  int n1,n2,i,j,k;

45

  n1=m-l+1;

46

  n2=h-m;

47

​

48

  for(i=0;i<n1;i++)

49

    arr1[i]=arr[l+i];

50

  for(j=0;j<n2;j++)

@Karkala-Gaurav-Prabhu
Commit changes
Commit summary
Optional extended description
Commit directly to the master branch.
Create a new branch for this commit and start a pull request. Learn more about pull requests.

    © 2019 GitHub, Inc.
    Terms
    Privacy
    Security
    Status
    Help

    Contact GitHub
    Pricing
    API
    Training
    Blog
    About


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

int main()
{
  int n,i,x;
  
  cout<<"Enter the size of array: ";  
  cin>>n;
  cout<<"Enter the elements:\n";
  for(i=0;i<n;i++)
    cin>>arr[i];
  
  x=merge_sort(arr,0,n-1);  
  
  cout<<"Sorted array:"; 
  for(i=0;i<n;i++)
    cout<<arr[i]<<" ";

	cout<<"\n no of comparisions : "<<x;
	cout<<"\n";
  
  return 0;
}



