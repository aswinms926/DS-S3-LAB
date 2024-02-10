#include<stdio.h>
void main()
{
    int i,n,num,c=0,z=0;
    c+=2;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        c++;
        scanf("%d",&a[i]);
        c++;
    }c++;
    printf("Enter the number u want to search : ");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        c++;
        if(num==a[i])
        {
            c++;
            z=1;
            printf("element is found at index  %d\n",i);
            break;
        }
    }c++;
    if(z!=1)
    {
        c++;
        printf("Element is not found ");
    }
    printf("time complexity is %d\n",c);
        printf("space complexity is %d\n",24+(4*n));

    
}