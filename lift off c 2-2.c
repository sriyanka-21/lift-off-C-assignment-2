#include<stdio.h>
int main()
{
	int a[10],i,o=0,e=0;
	printf("enter elements=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		e=e+a[i];
		else
		o=o+a[i];
	}
	printf("sum of all the even numbers are=%d\n",e);
	printf("sum of all odd numbers are=%d",o);
	return 0;
}
