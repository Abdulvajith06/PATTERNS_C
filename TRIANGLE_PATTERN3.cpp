#include<stdio.h>
int main()
{
	int i,j;
	int n;
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
