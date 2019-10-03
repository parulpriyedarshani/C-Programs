#include<stdio.h>
int main()
{
	int mid,first,last,search,i,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the elements of the array:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the element to be searched:");
	scanf("%d", &search);
	//binary serach begins
	
	for(i=0;i<n;i++)
	{
		arr[0]=1;
		if(search==arr[0])
		{
			printf("Element found:");
			break;
		}
		else
		{
			mid=(first+last)/2;
			
		}
		for(i=0;i<n;i++)
		{
			if(search==arr[mid])
			{
				printf("%d is located at location %d",search,mid);
			}
			else
			{
			printf("%d is loacated at location %d",search,mid-1);
				printf("%d is located at location %d",search,mid+1);
			}
			mid=(first+last)/2;
			return 0;
			
		}
	}
}
