#include<stdio.h>
float add(s);
float query(s);

	int n,q;
	char arr[n],i,s;
	 int count[n];
	 void add(char s)
	 {
	 	for(i=0;i<n;i++)
	 	{
	 		if(arr[i]==s)
	 		{
	 			count[i++];
	 			return;
			 }
		 }
	 }
	 void query(char s)
	 {
	 	for(i=0;i<n;i++)
	 	{ 
	 	if(arr[i]==s)
	 	{
	 		return count[n];
		 }
	 		
		 }
	 }
	 
}
	int main()
	{
	printf("Enter the number of strings:\n");
	scanf("%d",&n);
	printf("Enter the input strings in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",&arr[i]);
	 }
	 add(s);
	 for(i=0;i<q;i++)
	 {
	 	scanf("%s",&arr[i]);
	 	
	 }
	 query(s);
	return 0;
}
