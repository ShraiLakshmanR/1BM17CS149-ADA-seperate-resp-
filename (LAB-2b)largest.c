#include<stdio.h>

void bubble(int arr[],int n)
{

int temp,i,j;
for(i=0;i<n;i++)
	{
	for(j=0;j<n-i-1;j++)
		{
		if(arr[j]>arr[j+1])
			{
			temp=arr[j];	
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}

		}

	}
printf("\nSorted Array\n");
for(i=0;i<n;i++)
{
printf("\n");
printf("%d",arr[i]);
}
}
//------------------------------------------------------------------bubble sorting------------------------------------------------------------------------------------------------------

void printMax(int arr[],int n,int k)
{
int i;
printf("\nMax elements\n");
for(i=n-1;i>=n-k;i--)
{
printf("%d",arr[i]);
printf("\n");
}
}

//-----------------------------------------------------------------Max Element------------------------------------------------------------------------------------------------------




int main()
{
int n,k,i;
int arr[10];
printf("\nEnter the number of elements\n");
scanf("%d",&n);
printf("\nEmter the elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the number of max elements\n");
scanf("%d",&k);
bubble(arr,n);
printMax(arr,n,k);



return 0;
}
