#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int capacity, n;
    cout<<"\nEnter Capacity\n";
    cin>>capacity;
    cout<<"\nEnter Weights and profits\n";
    cin>>n;
    int weights[n+1], profits[n+1], dp[n+1][capacity+1];
    weights[0]=0;  //1st ele 0 
    profits[0]=0;
	cout<<"\nEnter Value of weights\n";
    for(int i=1;i<=n;i++){
        cin>>weights[i];
    }

cout<<"\nEnter Value of profits\n";
    for(int i=1;i<=n;i++){
        cin>>profits[i];
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=capacity;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(weights[i]<=j){
                dp[i][j]=max(dp[i-1][j], dp[i-1][j-weights[i]]+profits[i]);
            }else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<"Profit is : ";
    cout<<dp[n][capacity]<<"\n";
    return 0;
}
