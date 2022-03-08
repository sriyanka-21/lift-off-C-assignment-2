#include <stdio.h>  
int main()  
{  
    char s1[20];
    char s2[20];  
    int i,l,j,k;  
    printf("Enter the first string=");  
    scanf("%s",s1);  
    printf("\nEnter the second string=");  
    scanf("%s",s2);  
    for(i=0;s1[i]!='\0';i++);   
      
      
    for(j=0;s2[j]!='\0';j++)  
    {  
        
        s1[i]=s2[j];  
        i++;  
    }  
    s1[i]='\0';  
   printf("After concatenation, the string would look like: %s\n",s1);  
 printf("  reverse of string=");
   for(i=0;s1[i]!='\0';i++)
   {l++;
   }
    for(k=(l-1);k>=0;k--)
 { printf("%c",s1[k]);}
return 0; 
}


