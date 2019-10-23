#include<bits/stdc++.h>
using namespace std;
bool isHeap(int *arr,int n)
{
    for(int i=1;i<=n/2;i++)
       {
	if(2*i+1<n)
	{
   if(arr[i]<=max(arr[2*i],arr[2*i+1]))
        return false;
       }
	if(arr[i]<arr[2*i])
	return false;
       }
    return true;

}
int main()
{
int n,*arr;
cout<<"enter the size of the array:"<<endl;
cin>>n;
arr=new int[n+1];
cout<<"enter the array elements:"<<endl;
for(int i=1;i<=n;i++)
{
cin>>arr[i];
}
isHeap(arr,n)?cout<<"True\n":cout<<"False\n";
return 0;
}

/* output
6
90
15
10
7
12
2
*/
