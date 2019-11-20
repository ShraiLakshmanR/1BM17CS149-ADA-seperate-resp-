#include<bits/stdc++.h>
using namespace std;
int a[10][10],n;
void floyds(){
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
            }
        }
    }
    cout<<"all pair shortest path matrix is\n";
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
}
int main(){
    cout<<"enter the no. of vertices:";
    cin>>n;
    cout<<"enter the path matrix\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    floyds();
    return 0;
}
/*enter the no. of vertices:5
enter the path matrix
0 2 9999 1 8
6 0 3 2 9999
9999 9999 0 4 9999
9999 9999 2 0 3
3 9999 9999 9999 0
all pair shortest path matrix is
0       2       3       1       4
6       0       3       2       5
10      12      0       4       7
6       8       2       0       3
3       5       6       4       0 */
