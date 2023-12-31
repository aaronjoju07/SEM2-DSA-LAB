#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;
void insert(int);
void delete();
void display();

void main()
{
    int choice, value;
    printf("\n:: Queue Implementation using Linked List ::\n");
    while (1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong selection!!! Please try again!!!\n");
        }
    }
}
void insert(int val)
{
    struct node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct node *));
    newNode->data = val;
    if (front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
    printf("\nInsertion is Success!!!\n");
}
void delete()
{
    if (front == NULL)
    {
        printf("\nQueue is Empty!!!\n");
    }
    else
    {
        struct node *temp = front;
        front = front->next;
        printf("\nDeleted element: %d\n", temp->data);
        free(temp);
    }
}
void display()
{
    if (front == NULL)
    {
        printf("\nQueue is Empty!!!\n");
    }
    else
    {
        struct node *temp = front;
        while (temp->next != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("--->NULL\n");
    }
}