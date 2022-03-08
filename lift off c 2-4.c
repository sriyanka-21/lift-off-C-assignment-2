#include <stdio.h>
int main()
 {

  int i, n;
  int a= 0, b= 1,c=0;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d\t%d\t ",a,b);
  for (i = 3; i <= n; ++i)
   {
  	c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
  }
  return 0;
}
