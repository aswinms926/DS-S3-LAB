#include<stdio.h>
void main()
{
    int i,j,n,num,temp,c=0;
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
    for(i=0;i<n;i++)
    {
        c++;
        for(j=0;j<n-i-1;j++)
        {
            c++;
            if(a[j]>a[j+1])
            {
                c+=2;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }c++;
    }c++;
    
    printf("sorted array is : ");
    
    for(i=0;i<n;i++)
    {
        c++;
        printf("%d",a[i]);
        c++;
    }c++;
    int l=0,r=n-1;
    c+=2;
    printf("\nEnter the number u want to search : ");
    scanf("%d",&num);
    while(l<=r)
    {
        c++;
        int mid=(l+r)/2;
        if(a[mid]==num)
        {
            c++;
            printf("Element is found at index %d\n ",mid);
            break;
        }
        else if(a[mid]>num)
        {
            c++;
            r=mid-1;
        }
        else if(a[mid]<num)
        {
            c++;
            l=mid+1;
        }
    }
    if(l>r)
    {
        c++;
        printf("Element is not found ");
    }
    
    

    printf("time complexity is %d\n",c);
        printf("Space complexity is %d",24+(4*n));
    
}