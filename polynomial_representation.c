 
#include <stdio.h>
struct poly
{
    int coeff;
    int expo;
    
    
}p[10];
int main()
{
    struct poly;
    
    int i,n;
    
    printf("enter the number of terms : ");
    scanf("%d",&n);
    
 printf("enter the coefficients and exponents  : \n");
 for(i=0;i<n;i++)
 {
     printf("enter the coefficient :");
     scanf("%d",&p[i].coeff);
      printf("enter the exponent :");
     scanf("%d",&p[i].expo);
     
 }
         printf("p(x)= ");
            for(i=0;i<n-1;i++)
            {
                printf("(%dx^%d)+",p[i].coeff,p[i].expo);
            }
             for(i=n-1;i<n;i++)
            {
                printf("(%dx^%d)",p[i].coeff,p[i].expo);
            }
    return 0;
}
