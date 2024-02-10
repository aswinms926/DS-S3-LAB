#include<stdio.h>
void main()
{
    int i,pos,n;
    printf("enter the no of elements of binary tree :");
    scanf("%d",&n);
    int t[n];
    printf("Enter the elements : ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t[i]);
    }
     printf("enter the pos of the element  :");
    scanf("%d",&pos);
    if(2*pos>n)
    {
        printf("%d has no LC",t[pos]);
        
    }
    else
    {
        printf("LC of %d is %d",t[pos],t[2*pos]);
    }
    if(2*pos+1>n)
    {
        printf("%d has no RC",t[pos]);
        
    }
    else
    {
        printf("RC of %d is %d",t[pos],t[2*pos+1]);
    }
    if(pos>1 && pos<=n)
    {
        printf("parent of %d is %d",t[pos],t[pos/2]);
        
    }
    else
    {
        printf("%d has no Parent",t[pos]);
    }
}