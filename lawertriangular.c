#include<stdio.h>
main()
{
	int a[10][10],i,j,m,n;
	printf("Enter the order of the matrix:");
	scanf("%d %d",&m,&n);
	printf("Enter the array elements:");
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("the lower matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i>=j)	
		
		printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	
}