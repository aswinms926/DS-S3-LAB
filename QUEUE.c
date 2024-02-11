 #include<stdio.h>
 int queue[100],option,n,f=0,r=-1;
 void Enqueue();
 void Dequeue();
 void peek();
 void display();
 void main()
 {
      
     printf("Enter the size of the queue (max size : 100) : ");
     scanf("%d",&n);
      printf("\n1)Enqueue\n2)Dequeue\n4)peek\n4)display()\n5)exit\n : ");
      do{
               printf("\nEnter the operation u want to perform : ");
               scanf("%d",&option);
               switch(option)
               {
                   case 1 :
                   
                     Enqueue();
                   break;
                   
                   case 2:
                   
                    Dequeue();
                   break;
                   
                    case 3:
                    peek();
                    break;
                    
                   case 4 :
                   
                    display();
                    break;
                   
                    case 5 :
                    break;
                    default :
                    break;
               }

      }while(option!=5);
     
 }
 void Enqueue()
 {
     if(r>=n-1)
     {
         printf("Overflow \n");
     }
     else
     {
         r=r+1;
         printf("Enter the element u want to enqueu : ");
         scanf("%d",&queue[r]);
     }
 }
  void Dequeue()
 {
     if(f==r)
     {
         printf("%d is deleted ",queue[f]);
         f=0;
         r=-1;
     }
      else if(f>r)
     {
         printf("underflow \n");
     }
     else
     {
        
         printf( "%d is deleted ",queue[f] );
         f=f+1;
     }
 }
 void peek()
 {
     if(f>r)
     {
         printf("epmty \n");
     }
     else
     {
        
         printf("foremost element is %d : ",queue[f]);
      }
 }
  void display()
 {
     if(f>r)
     {
         printf("epmty \n");
     }
     else
     {
        for(int i=f;i<=r;i++)
        {
            printf("%d\t",queue[i]);
        }
     }
 }
 /*******************************************************************
  OUTPUT
  
Enter the size of the queue (max size : 100) : 3

1)Enqueue
2)Dequeue
4)peek
4)display()
5)exit
 : 
Enter the operation u want to perform : 1
Enter the element u want to enqueu : 2

Enter the operation u want to perform : 1
Enter the element u want to enqueu : 3

Enter the operation u want to perform : 1
Enter the element u want to enqueu : 4

Enter the operation u want to perform : 1
Overflow 

Enter the operation u want to perform : 2
2 is deleted 
Enter the operation u want to perform : 2
3 is deleted 
Enter the operation u want to perform : 2
4 is deleted 
Enter the operation u want to perform : 2
underflow 

Enter the operation u want to perform : 1
Enter the element u want to enqueu : 5

Enter the operation u want to perform : 1
Enter the element u want to enqueu : 6

Enter the operation u want to perform : 2
5 is deleted 
Enter the operation u want to perform : 1
Enter the element u want to enqueu : 7

Enter the operation u want to perform : 3
foremost element is 6 : 
Enter the operation u want to perform : 4
6	7	
Enter the operation u want to perform : 5
*******************************************************************/