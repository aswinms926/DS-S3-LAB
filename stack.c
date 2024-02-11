 #include<stdio.h>
 int stack[100],option,n,top;
 void push();
 void pop();
 void display();
 void main()
 {
     top=-1;
     printf("Enter the size of the stack (max size : 100) : ");
     scanf("%d",&n);
      printf("\n1)push()\n2)pop()\n3)display()\n4)exit\n : ");
      do{
               printf("\nEnter the operation u want to perform : ");
               scanf("%d",&option);
               switch(option)
               {
                   case 1 :
                   
                     push();
                   break;
                   
                   case 2:
                   
                    pop();
                   break;
                   
                   case 3 :
                   
                      display();
                    break;
                   
                    case 4 :
                    break;
                    default :
                    break;
               }

      }while(option!=4);
     
 }
 void push()
 {
     if(top>=n-1)
     {
         printf("OVerflow\n");
     }
     else
     {
         top++;
         printf("Enter the element u want to push : ");
         scanf("%d",&stack[top]);
     }
 }
 void pop()
 {
     if(top<=-1)
     {
         printf("Underflow\n");
     }
     else
     {
        
        printf("%d element is deleted ",stack[top]);
        top--;
     }
 }
 void display()
 {
     if(top<=-1)
     {
         printf("epmty ");
     }
     else
     {
        
        printf("Elements in the stack is : ");
        for( int i=top;i>=0;i--)
        {
            printf("%d \t",stack[i]);
        }
     }
 }