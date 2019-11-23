#include <bits/stdc++.h> 
using namespace std; 
#define INF 99999 

void floydAlgo(int V,int **graph) 
{ 	
	int dist[V][V]; 	
	for (int i = 0; i < V; i++) 
		for (int j = 0; j < V; j++) 
			dist[i][j] = graph[i][j]; 

	for (int k = 0; k < V; k++) 
	{ 
		for (int i = 0; i < V; i++) 
		{ 
			for (int j = 0; j < V; j++) 
			{ 
				if (dist[i][k] + dist[k][j] < dist[i][j]) 
					dist[i][j] = dist[i][k] + dist[k][j]; 
			} 
		} 
	} 
	cout<<"Shortest distance matrix\n"; 
	for (int i = 0; i < V; i++) 
	{ 
		for (int j = 0; j < V; j++) 
		{ 
			if (dist[i][j] == INF) 
				cout<<"INF"<<"	 "; 
			else
				cout<<dist[i][j]<<"	 "; 
		} 
		cout<<endl; 
	} 	
} 
int main() 
{ 	int V ;
	cout<<"\nEnter size of graph : ";
	cin>>V;
	int **graph = new int*[V];
	
	for(int i=0;i<V;i++)
		graph[i] = new int[V];
	cout<<"\nEnter graph : \n";
	
	for(int i=0;i<V;i++)
		for(int j=0;j<V;j++)
			cin>>graph[i][j];
	
	floydAlgo(V,graph); 
	return 0; 
} 
