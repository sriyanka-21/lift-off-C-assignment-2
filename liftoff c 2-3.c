#include <stdio.h>
#include <math.h>
int main()
{
    int n,f, l,d,s;
    printf("Enter number = ");
    scanf("%d", &n);
    l= n % 10;
    d= (int)log10(n);
    f = (n / pow(10,d));
    s=l;
    s= s*(int) round(pow(10,d));
    s+= n % ((int)round(pow(10,d)));
    s-=l;
    s+= f;
    printf("Number after swapping first and last digit: %d",s);
    return 0;
}
