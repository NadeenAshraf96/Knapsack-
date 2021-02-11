//utility function that returns maximum of two integers
int max(int x, int y)
{
return (a>b)?a:b;
}
//knapsack function using recursion

int knapsackfunction(int W, int weight[], int value[], int n)
{
 if (n==0||W==0)
    return 0;
 if (weight[n-1]>W)
    return knapsackfunction(W, weight, value, n-1)

else return max(value[n-1] + knapsackfunction(W - weight[n-1], weight, value, n-1), knapsackfunction(W, weight, value, n-1));
} 

