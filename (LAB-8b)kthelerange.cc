#include <bits/stdc++.h> 

using namespace std; 
int ptr[501]; 
void findSmallestRange(int **arr, int n, int k) 
{ 
	int i,minval,maxval,minrange,minel,maxel,flag,minind; 
		
	for(i = 0;i <= k;i++) 
		ptr[i] = 0; 

	minrange = INT_MAX; 
		
	while(1)	 
	{ 
		minind = -1; 
		minval = INT_MAX; 
		maxval =	 INT_MIN; 
		flag = 0; 

		
		for(i = 0;i < k;i++) 
		{	 
				
			if(ptr[i] == n) 
			{ 
				flag = 1; 
				break; 
			} 
			
			if(ptr[i] < n && arr[i][ptr[i]] < minval) 
			{ 
				minind=i;
				minval=arr[i][ptr[i]]; 
			} 
			
			if(ptr[i] < n && arr[i][ptr[i]] > maxval)	 
			{ 
				maxval = arr[i][ptr[i]]; 
			} 
		} 

		//Program exited with return code: 0

		if(flag) 
			break; 

		ptr[minind]++; 


		if((maxval-minval) < minrange) 
		{ 
			minel = minval; 
			maxel = maxval; 
			minrange = maxel - minel; 
		} 
	} 
		
	printf("The smallest range is [%d , %d]\n",minel,maxel); 
}	 

int main() 
{
	int k,N;
	cout<<"ENTER THE VALUE OF K:\n ";
	cin>>k;
	cout<<"\nENTER THE SIZE OF THE ARRAY:\n";
	cin>>N;
	int **arr=new int*[k];
	for(int i=0;i<k;i++)
		arr[i]=new int[N];
	cout<<"\nENTER THE ARRAY ELEMENTS:\n";
	for(int i=0;i<k;i++)
		for(int j=0;j<N;j++)
			cin>>arr[i][j];

	findSmallestRange(arr,N,k); 

	return 0; 
} 


/*ENter value of K=2

Enter size of array =4

78
13
12
16
5
23
13
5

*/
