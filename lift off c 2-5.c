#include <stdio.h>
int main() {
  int a[2][2], b[2][2], sum[2][2],mul[2][2],i,j,k;
   printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j)
	 {
	  printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < 2; ++i)
    for (j = 0; j < 2; ++j) {
      printf("%d\t", sum[i][j]);
      if (j ==1) {
        printf("\n\n");
      }
    }
    printf("multiply of the matrix=\n");    
for(i=0;i<2;i++)    
{    
for(j=0;j<2;j++)    
{    
mul[i][j]=0;    
for(k=0;k<2;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
for(i=0;i<2;i++)    
{    
for(j=0;j<2;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  

