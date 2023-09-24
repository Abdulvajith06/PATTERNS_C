#include<stdio.h>

int main()
{
	int i,j,n,a=1;
	printf("Enter the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",a);
			a=a+2;
		}
		printf("\n");
	}
}
