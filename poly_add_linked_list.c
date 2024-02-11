#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n1,n2,i,coeff1,expo1;
    struct node 
    {
        int coeff,expo;
        struct node *link;
    }*phead=NULL,*qhead=NULL,*rhead=NULL,*p,*q,*r,*temp;
    printf("Enter the number of elements in polynomial 1\n");
    scanf("%d",&n1);
    printf("Enter the number of elements in polynomial 2\n");
    scanf("%d",&n2);
    printf("Enter the elements of 1st poly in decending order\n");
    for(i=0;i<n1;i++)
    {
        printf("Enter the coeff of %d term",i+1);
        scanf("%d",&coeff1);
        printf("enter the expo of %d term:",i+1);
        scanf("%d",&expo1);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=coeff1;
        temp->expo=expo1;
        temp->link=NULL;
        if(phead==NULL)
        {
            phead=temp;
            p=temp;
        }
        else
        {
            p->link=temp;
            p=temp;
        }
    }
    if(n2>0)
    {
        printf("Enter the elements of 2st poly in decending order\n");
    for(i=0;i<n2;i++)
    {
        printf("Enter the coeff of %d term",i+1);
        scanf("%d",&coeff1);
        printf("enter the expo of %d term:",i+1);
        scanf("%d",&expo1);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=coeff1;
        temp->expo=expo1;
        temp->link=NULL;
        if(qhead==NULL)
        {
            qhead=temp;
            q=temp;
        }
        else
        {
            q->link=temp;
            q=temp;
        }
    }
    }
    printf("\nfirst poly : ");
    p=phead;
    while(p!=NULL)
    {
        if(p->link==NULL)
        {
            printf("%dx^%d",p->coeff,p->expo);
        }
        else
        {
            printf("%dx^%d+",p->coeff,p->expo);
        }p=p->link;
    }
     printf("\nsecond poly : ");
    q=qhead;
    while(q!=NULL)
    {
        if(q->link==NULL)
        {
            printf("%dx^%d",q->coeff,q->expo);
        }
        else
        {
            printf("%dx^%d+",q->coeff,q->expo);
        }q=q->link;
    }
    p=phead;
    q=qhead;
    while(p!=NULL && q!=NULL)
    {
         temp=(struct node*)malloc(sizeof(struct node));
         if(p->expo==q->expo)
         {
             temp->coeff=p->coeff+q->coeff;
             temp->expo=p->expo;
             temp->link=NULL;
             p=p->link;
             q=q->link;
         }
         else if(p->expo>q->expo)
     {
         temp->coeff=p->coeff ;
             temp->expo=p->expo;
             temp->link=NULL;
             p=p->link;
             
             
     }
     else if (p->expo<q->expo)
     {
          temp->coeff= q->coeff;
             temp->expo=q->expo;
             temp->link=NULL;
             q=q->link;
     }
     if(rhead==NULL)
     {
         rhead=temp;
         r=temp;
     }
     else
     {
         r->link=temp;
         r=temp;
     }
    }
    while(p!=NULL)
    {
        
         temp=(struct node*)malloc(sizeof(struct node));
          temp->coeff=p->coeff ;
             temp->expo=p->expo;
             temp->link=NULL;
             p=p->link;
              if(rhead==NULL)
              {
                  rhead=temp;
                  r=temp;
              }else
              {
                  r->link=temp;
                  r=temp;
              }
    }
    while(q!=NULL)
    {
        
         temp=(struct node*)malloc(sizeof(struct node));
          temp->coeff=q->coeff ;
             temp->expo=q->expo;
             temp->link=NULL;
             q=q->link;
              if(rhead==NULL)
              {
                  rhead=temp;
                  r=temp;
              }else
              {
                  r->link=temp;
                  r=temp;
              }
    }
    printf("\nresultant polynoamial : ");
    r=rhead;
     i=1;
    while(r!=NULL)
 {
    if(r->link==NULL){
      printf("%dX^%d  ",r->coeff,r->expo);
    }
    else{
        printf("%dX^%d + ",r->coeff,r->expo);
    }
 r=r->link;
 }
 printf("\n");
}
