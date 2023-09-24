#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int x=i;
		for(j=1;j<=n;j++)
		{
			printf("%d\t",x);
			x=x+n;
		}
		printf("\n");
		}
}
