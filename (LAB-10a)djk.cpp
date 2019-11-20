#include<bits/stdc++.h>
using namespace std;
int cost[10][10],n;
void dijkstras(int src){
    int dist[10],vis[10],count,min,u;
    for(int j=1;j<=n;j++){
        dist[j]=cost[src][j];
        vis[j]=0;
    }
    dist[src]=0;
    vis[src]=1;
    count=1;
    while(count!=n){
        min=9999;
        for(int j=1;j<=n;j++){
            if(dist[j]<min && vis[j]!=1){
                min=dist[j];
                u=j;
            }
        }
        vis[u]=1;
        count+=1;
        for(int j=1;j<=n;j++){
            if(min+cost[u][j] < dist[j]  && vis[j]!=1){
                dist[j]=min+cost[u][j];
            }
        }
    }
    cout<<"shortest distance is\n";
    for(int j=1;j<=n;j++){
        cout<<src<<"-->"<<j<<"="<<dist[j]<<"\n";
    }

}
int main(){
    int source,a;
    cout<<"enter the no. of vertices:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            cout<<"enter the distance between"<<i<<" and "<<j<<"=";
            cin>>a;
            cost[i][j]=cost[j][i]=a;  //ex:distance between two vertex remains the same
        }
        cout<<"\n";
    }
    cout<<"enter source";
    cin>>source;
    dijkstras(source);
    return 0;
}
/*
enter the no. of vertices:
5
enter the distance between1 and 2=3
enter the distance between1 and 3=9999
enter the distance between1 and 4=7
enter the distance between1 and 5=9999

enter the distance between2 and 3=4
enter the distance between2 and 4=2
enter the distance between2 and 5=9999

enter the distance between3 and 4=6
enter the distance between3 and 5=5

enter the distance between4 and 5=4


enter source1
shortest distance is
1-->1=0
1-->2=3
1-->3=7
1-->4=5
1-->5=9
*/
