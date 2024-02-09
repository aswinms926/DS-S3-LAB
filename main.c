 #include<stdio.h>
 #include<stdlib.h>
  #define TB 5
  int h[TB]={0};
  void  insert()
  {
      int i,key,hkey,index;
      printf("\nEnter the element you want to insert : ");
      scanf("%d",&key);
      hkey=key%TB;
      for(i=0;i<TB;i++)
      {
          index=(hkey+i)%TB;
          if(h[index]==0)
          {
              h[index]=key;
              break;
          
      }
  }
  if(i==TB)
  {
      printf("Element cannot be inserted : ");
  }
  
  }
  void  search()
  {
      int i,key,hkey,index;
      printf("\nEnter the search element  : ");
      scanf("%d",&key);
      hkey=key%TB;
      for(i=0;i<TB;i++)
      {
          index=(hkey+i)%TB;
          if(h[index]==key)
          {
             printf("Element is found at %d",index);
             break;
          }
      }
  
  if(i==TB)
  {
      printf("Element not found : ");
  }
  
  }
  void display()
  {
      int i;
      for(i=0;i<TB;i++)
      {
          printf("\nat index %d \t value is %d",i,h[i]);
      }
  }
  int main()
  {
      int i,op;
      while(1)
      {
      printf("\nEnter the operation :\n1)insert\n2)search\n3)display\n4)exit\n");
      scanf("%d",&op);
      switch(op)
      {
          case 1:
           insert();
           break;
           case 2:
           search();
           break;
           case 3:
           display();
           break;
           case 4:
           exit(0);
          
      }
    }
  }