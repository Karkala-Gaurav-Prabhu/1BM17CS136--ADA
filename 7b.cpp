#include<stdio.h> 

int max(int a, int b) { return (a > b)? a : b; } 

int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i, w; 
   int K[n+1][W+1]; 

   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   }
   
   int res = K[n][W];     
      
    w = W;
	printf("The Items of weights ");
    for (i = n; i > 0 && res > 0; i--) { 
          
        if (res == K[i - 1][w])  
            continue;         
        else { 
  
            printf("%d ", wt[i - 1]); 
            res = res - val[i - 1]; 
            w = w - wt[i - 1];
        }
    } 
   printf("provide max profit");
   return K[n][W]; 
} 
  
int main() 
{ 
    int val[] = {30, 40, 35}; 
    int wt[] = {20, 25, 10}; 
    int  W = 40; 
    int n = sizeof(val)/sizeof(val[0]); 
    printf("\nThe max profit is: %d\n", knapSack(W, wt, val, n)); 
    return 0; 
} 