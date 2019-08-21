#include <stdio.h>


int binarys(int n)
{
int x;
int mid,root,low=0,high=n-1;

	while(low<=high)
	{
	mid=(low+high)/2;
	x=mid*mid;
	if(x==n)
		{
		return mid;
		}
	else if(x>n)
		{
		high=mid-1;
		}
	else
		{
		low=mid+1;
		root=mid;
		}
	}
if(root==0)
	{	
	return 1;
	}
else
	{
	return root;
	}
}

int main()
{
int n;
printf("\nEnter a number to find its root\n");
scanf("%d",&n);
int r=binarys(n);
printf("\n\nRoot=%d\n",r);

return 0;
}
