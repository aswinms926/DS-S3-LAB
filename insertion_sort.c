
#include<stdio.h>
void main()
{ int n,i,j,a[30],t;
    printf("enter the limit : ");
    scanf("%d",&n);
     printf("Enter th elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=1;
    while(i<n)
    {
        j=i;
        while(a[j]<a[j-1])
        {
            t=a[j];
            a[j]=a[j-1];
            a[j-1]=t;
            j=j-1;
        }i=i+1;
    }
    printf("Sorted array is : ");
    for(i=0;i<n;i++)

    {
        printf("%d\t",a[i]);
    }
}