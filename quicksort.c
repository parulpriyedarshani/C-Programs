 #include<stdio.h>
 int a[100000];
 
 void swap(int i,int j)
 {
 	int t;
	 t=a[i];
 	a[i]=a[j];
 	a[j]=t;
 }
 
 int partition(int m,int p)
 {
 	int v=a[m],i=m,j=p;
 	
 	while(j>i)
 	{
 		do{
 			i++;
		 } while(i<p && a[i]<=v);
	 {
	 	do{
	 		j--;
		 }
	 while(j>m && a[j]>=v);
	 {
	 	if(j>i)
	 	{
	 		swap(i,j);
		 }
		 swap(m,j);
		  
	 }
	 
}	
 }
 return j;
}
 
 void quicksort(int p,int q)
 {
 	if(q>p)
	 {
	 	int j= partition(p,q+1);
 	quicksort(p,j-1);
 	quicksort(j+1,q);
	 }
 }
 
 int main()
 {
 	int i,n;
 	printf("Enter the size of array:");
 	scanf("%d",&n);
	printf("Enter the elements in the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quicksort(0,n-1);
	printf("The sorted elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
}
