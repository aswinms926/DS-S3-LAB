 #include<stdio.h>
 int c[100],f=-1,r=-1,n,o;
 void Enqueue();
void  Dequeue();
void Display();

 void main()
 {
     printf("Enter the size of the circular queue: ");
     scanf("%d",&n);
          printf("1)Enqueue\n2)Dequeue\n3)Display\n4)exit\n");
          do{
              printf("enter your choise : ");
              scanf("%d",&o);
              switch(o)
              {
                  case 1:
                   Enqueue();
                   break;
                  case 2:
                  Dequeue();
                  break;
                  case 3:
                  Display();
                  break;
                  case 4:
                  break;
                  default :
                  break;
              }
          }while(o!=4);

 }
  void Enqueue()
  {
      if(((r+1)%n)==f)
      {
          printf("overflow\n");
      }
      else
      {
          if(f==-1)
          {
              f=0;
          }
          r=(r+1)%n;
          printf("Enter the element you want to enqueue : ");
          scanf("%d",&c[r]);
      }
  }
   void Dequeue()
  {
      if(f==-1 &&r==-1)
      {
          printf("Underflow\n");
      }
      else 
      {
          int e=c[f];
          if(f==r)
          {
              f=r=-1;
              
          }
          else
          {
             f=(f+1)%n;
          }
          printf("%d is deleted \n",e);
      }
  }
    void Display()
  {
      if(f==-1 && r==-1)
      {
          printf("epmty\n");
      }
      else
      {
          printf("circular queue ---->>");
          int i;
          for(i=f;i!=r;i=(i+1)%n)
          {
              printf("%d\t",c[i]);
          } printf("%d\n",c[i]);
          
      }
  }
  /**************************************************************
   * OUTPUT
   
Enter the size of the circular queue: 3
1)Enqueue
2)Dequeue
3)Display
4)exit
enter your choise : 1
Enter the element you want to enqueue : 2
enter your choise : 1
Enter the element you want to enqueue : 3
enter your choise : 1
Enter the element you want to enqueue : 4
enter your choise : 1
overflow
enter your choise : 2
2 is deleted 
enter your choise : 2
3 is deleted 
enter your choise : 2
4 is deleted 
enter your choise : 2
Underflow
enter your choise : 1
Enter the element you want to enqueue : 5
enter your choise : 1
Enter the element you want to enqueue : 6
enter your choise : 2
5 is deleted 
enter your choise : 1
Enter the element you want to enqueue : 7
enter your choise : 3
circular queue ---->>6	7
enter your choise : 4
****************************************************************/