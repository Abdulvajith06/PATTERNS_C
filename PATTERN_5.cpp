#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",2*(i+j)-3);
		}
		printf("\n");
		}
}
