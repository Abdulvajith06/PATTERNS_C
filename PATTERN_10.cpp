#include<stdio.h>

int main()
{
	int i,j,n,x;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("%d\t",i%2);
		}
		printf("\n");
		}
}
