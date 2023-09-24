#include<stdio.h>

int main()
{
	int i,j,n,n1;
	printf("Enter the limit for n:");
	scanf("%d",&n);
	printf("Enter the limit for n1:");
	scanf("%d",&n1);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n1;j++)
		{
			printf("%d\t%d\t",j,i);
		}
		printf("\n");
	}
}
