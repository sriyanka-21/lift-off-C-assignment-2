#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(i==1 || i==num)
		{
			printf("\n");
			for(j=1;j<=num;j++)
			{printf(" * ");
			}
		}
		else
		{
			printf("\n*");
			for(j=2;j<=num;j++)
			{
				printf("   ");
			}
			printf(" * ");
		}
	}
	return 0;
}
