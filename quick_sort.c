 #include<stdio.h>
 void swap(int *a,int *b)
 {
     int temp=*a;
     *a=*b;
     *b=temp;
 }
 void quicksort(int a[],int s,int e)
 {
     if(s<e)
     {
         int p=a[s];
         int i=s+1;
         int j=e;
         while(i<=j)
         {
             while(i<=e && a[i]<p)
             {
                 i++;
             }
             while(j>s && a[j]>p)
             {
                 j--;
             }
             if(i<j)
             {
                 swap(&a[i],&a[j]);
                 i++;
                 j--;
             }
         }
         swap(&a[s],&a[j]);
         quicksort(a,s,j-1);
         quicksort(a,j+1,e);
     }
 }
 void main()
 {
     int i,n;
     printf("Read the array size : ");
     scanf("%d",&n);
     int a[n];
     printf("Enter the elements :");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("befor sorting : ");
     for(i=0;i<n;i++)
     {
         printf("%d " ,a[i]);
     }
     quicksort(a,0,n-1);
     printf("After sorting : ");
     for(i=0;i<n;i++)
     {
         printf("%d " ,a[i]);
     }
 }