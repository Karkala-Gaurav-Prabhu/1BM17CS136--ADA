#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of an array :\n";
	cin>>n;
	int arr[20];
	cout<<"Enter elements of an array:\n";
	for(int i=0;i<n;i++)	
		cin>>arr[i];
	cout<<"Enter the kth value:\n";
	int k;
	cin>>k;
	if(k<=0){
		cout<<"k cannot be less than or equal to zero";
	}
	int max;
	for(int i=0;i<k;i++){
		max = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]>arr[max]){
				swap(arr[j],arr[max]);
			}
		}
	}
	for(int i=0;i<k;i++){
		cout<<arr[i]<<" ";
	}
	
}	
