#include <stdio.h>
#include <stdlib.h>

void Begin_insert();
void last_insert();
void insert_random();
void delete_front();
void delete_last();
void delete_random();
void Display();

struct node
{
    int data;
    struct node *link;
} *head;

int main()
{
    int n, ch;
    printf("1)Begin_insert\n2)last_insert\n3)insert_random\n4)delete_front\n5)delete_last\n6)delete_random\n7)display\n8)exit");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Begin_insert();
            break;
        case 2:
            last_insert();
            break;
        case 3:
            insert_random();
            break;
        case 4:
            delete_front();
            break;
        case 5:
            delete_last();
            break;
        case 6:
            delete_random();
            break;
        case 7:
            Display();
            break;
        case 8:
            break;
        default:
            break;
        }
    } while (ch != 8);

    return 0;
}

void Begin_insert()
{
    int item;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the item: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = head;
    head = ptr;
}

void last_insert()
{
    int item;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    printf("Enter the item: ");
    scanf("%d", &item);
    ptr->data = item;
    ptr->link = NULL;
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp = head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr;
        ptr->link = NULL;
    }
}

void insert_random()
{
    int item, pos;
    if (head == NULL)
    {
        Begin_insert();
    }
    else
    {
        struct node *ptr = (struct node *)malloc(sizeof(struct node));
        struct node *temp;
        printf("Enter the item: ");
        scanf("%d", &item);
        printf("Enter the position: ");
        scanf("%d", &pos);
        temp = head;

        while (temp != NULL && temp->data != pos)
        {

            temp = temp->link;
        }
        if (temp == NULL)
        {
            printf("Search failed: ");
        }
        else
        {
            ptr->data = item;
            ptr->link = temp->link;
            temp->link = ptr;
        }
    }
}

void delete_front()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("No element to delete: ");
    }
    else
    {
        ptr = head;
        head = ptr->link;
        printf("%d is deleted", ptr->data);
        free(ptr);
    }
}

void delete_last()
{
    struct node *ptr, *temp;
    if (head == NULL)
    {
        printf("No element to delete: ");
    }
    else if (head->link == NULL)
    {
        ptr = head;
        head = ptr->link;
        printf("%d is deleted", ptr->data);
        free(ptr);
    }
    else
    {
        ptr = head;
        temp = ptr->link;
        while (temp->link != NULL)
        {
            ptr = temp;
            temp = temp->link;
        }
        ptr->link = temp->link;
        printf("%d is deleted", temp->data);
        free(temp);
    }
}

void delete_random()
{
    int key;
    struct node *ptr, *temp;
    if (head == NULL)
    {
        printf("No element to delete: ");
    }
    else if (head->link == NULL)
    {
        delete_front();
        head = NULL;
    }
    else
    {
        printf("Enter the key: ");
        scanf("%d", &key);
        ptr = head;
        temp = ptr->link;
        while (temp->link != NULL && temp->data != key)
        {
            ptr = temp;
            temp = temp->link;
        }
        if (temp->link == NULL)
        {
            printf("Search failed ");
            head = NULL;
        }
        else
        {
            ptr->link = temp->link;
            printf("%d is deleted", temp->data);
            free(temp);
            head = temp;
        }
    }
}

void Display()
{
    struct node *ptr;
    ptr = head;
    if (head == NULL)
    {
        printf("No elements");
    }
    else
    {
        printf("Linked list -->");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->link;
        }
        printf("\n");
    }
}
/*************************************************************
 * OUTPUT

1)Begin_insert
2)last_insert
3)insert_random
4)delete_front
5)delete_last
6)delete_random
7)display
8)exit
Enter your choice: 1
Enter the item: 2

Enter your choice: 1
Enter the item: 3

Enter your choice: 1
Enter the item: 4

Enter your choice: 3
Enter the item: 7
Enter the position: 3

Enter your choice: 7
Linked list -->4372

Enter your choice: 3
Enter the item: 1
Enter the position: 4

Enter your choice: 2
Enter the item: 9

Enter your choice: 7
Linked list -->413729

Enter your choice: 4
4 is deleted
Enter your choice: 7
Linked list -->13729

Enter your choice: 5
9 is deleted
Enter your choice: 6
Enter the key: 3
3 is deleted
Enter your choice: 7
********************************************************/