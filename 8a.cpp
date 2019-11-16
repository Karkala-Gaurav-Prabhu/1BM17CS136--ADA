#include<iostream>
using namespace std;
int n;
 int a[10];
int max(int a, int b) { return (a > b)? a : b; }
bool heap()
{
    for(int i=0;i<n/2;i++)
    {
        if(!(a[i]>=max(a[2*i+1],a[(2*i+2>n)?(2*i+1):(2*i+2)])))
            return false;

     }
     return true;
}
int main()
{


    cout<<"enter the size : ";
    cin>>n;

    cout<<"enter the array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];

    if(heap())
        cout<<"TRUE it's a binary heap";
    else
        cout<<"No it's not a heap";


}
