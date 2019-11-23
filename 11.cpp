#include <bits/stdc++.h> 

using namespace std; 

struct Item
{ 
	int value, weight;
	Item(int value, int weight) : value(value), weight(weight)
	{}
};

bool cmp(struct Item a, struct Item b) 
{ 
	double r1 = (double)a.value/a.weight; 
	double r2 = (double)b.value/b.weight; 
	return r1 > r2;
} 
 
double fractionalKnapsack(int W, struct Item arr[], int n) 

{
	sort(arr, arr + n, cmp);
  
    //    Uncomment to see new order of Items with their ratio 
    /* 
    for (int i = 0; i < n; i++) 
    { 
        cout << arr[i].value << "  " << arr[i].weight << " : "<< ((double)arr[i].value / arr[i].weight) << endl; 
    } 
    */
	int curWeight = 0;
	double finalvalue = 0.0;

	for (int i = 0; i < n; i++) 
    { 
        if (curWeight + arr[i].weight <= W) 
        { 
            curWeight += arr[i].weight; 
            finalvalue += arr[i].value; 
        } 

        else
        { 
            int remain = W - curWeight; 
            finalvalue += arr[i].value * ((double) remain / arr[i].weight); 
            break; 
        } 
    } 

    return finalvalue; 
}

int main() 
{
    int W, items;
    Item arr[] = {{60, 10}, {100, 20}, {120, 30}};

	cout<<"Enter Max Capacity of the bag: ";
	cin>>W;

	/*cout<<"Enter no. of Items: ";
	cin>>items;

	for(int i=0; i<items; i++)
	{
		for(int j=0; j<2; j++)
			cin>>arr[i][j];
	}*/
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << "Maximum value we can obtain = "<< fractionalKnapsack(W, arr, n)<<endl;
    return 0; 
}