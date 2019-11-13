#include<bits/stdc++.h> 
using namespace std; 
  
int minCoins(int coins[], int m, int V) 
{ 

    int table[V+1]; 

    table[0] = 0; 

    for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 

    for (int i=1; i<=V; i++) 
    { 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    } 
    return table[V]; 
} 

int main() 
{   int n,V;
    cout<<"Enter Number of Denomination :";
    cin>>n;
    int coins[n];
    cout<<"Enter coin Denomination in highest to lowest : ";
    for(int i=0;i<n;i++)
         cin>>coins[i];
    //int coins[] =  {9, 6, 5, 1}; 
    int m = sizeof(coins)/sizeof(coins[0]);
    cout<<"Maximum Cost that is to be returned\n";
    cin>>V; 
    cout << "Minimum coins required is "
         << minCoins(coins, n, V)<<endl; 
    return 0; 
}
