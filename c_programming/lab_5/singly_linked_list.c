#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;
struct node *temp;

void createList()
{
    if (head == NULL)
    {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0)
        {
            int d;
            struct node *newnode;
            struct node *temp;
            newnode = malloc(sizeof(struct node));
            head = newnode;
            temp = head;
            printf("\nEnter number to"
                   " be inserted : ");
            scanf("%d", &d);
            head->data = d;

            for (int i = 2; i <= n; i++)
            {
                newnode = malloc(sizeof(struct node));
                temp->next = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &d);
                newnode->data = d;
                temp = temp->next;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}

void insert_beg(int item)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = head;
    head = newNode;
}

void insert_end(int item)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    }
}

void insert_spec(int item)
{
    int i, pos;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter position of new node to insert : ");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("Void insertion");
        return;
    }
    else
    {
        temp = head;
        for (i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        newNode->data = item;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void delete_beg()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("Empty list.");
        return;
    }
    else
    {
        temp = head;
        printf("Deleted item is %d", head->data);
        head = head->next;
        free(temp);
    }
}

void delete_end()
{
    if (head == NULL)
    {
        printf("Empty list.");
        return;
    }
    else if (head->next == NULL)
    {
        temp = head;
        head = NULL;
        printf("Deleted item is %d", temp->data);
        free(temp);
    }
    else
    {
        temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        printf("Deleted item is %d", temp->next->data);
        free(temp->next);
        temp->next = NULL;
    }
}

void delete_spec()
{
    int i, pos;
    if (head == NULL)
    {
        printf("Empty list.");
        return;
    }
    else
    {
        printf("Enter position of new node to delete : ");
        scanf("%d", &pos);
        temp = head;
        for (i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        printf("Deleted item is %d", temp->next->data);
        temp->next = temp->next->next;
        free(temp->next);
    }
}

void traverse()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("The list is empty.");
    }
    else
    {
        temp = head;
        printf("Traverse of all elements of singly linked list are ");
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
            printf("\n");
    }
}

int main()
{
    int choice, n;

    printf("C Program to Insert,Delete and Traverse an Element in singly linked list using switch case\n");
    while (1)
    {
        printf("\n");
        printf("1. Inserting an Element at the beginning of linked list\n");
        printf("2. Inserting an Element at the end of linked list\n");
        printf("3. Inserting an Element at the specified position of linked list\n");
        printf("4. Deleting an Element at the beginning of linked list\n");
        printf("5. Deleting an Element at the end of linked list\n");
        printf("6. Deleting an Element at the specified position of linked list\n");
        printf("7. Transversing all Element in the linked the list\n");
        printf("8. Exit\n");

        printf("Select your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an element to insert at the beginning : ");
            scanf("%d", &n);
            insert_beg(n);
            break;

        case 2:
            printf("Enter an element to insert at the end : ");
            scanf("%d", &n);
            insert_end(n);
            break;

        case 3:
            printf("Enter an element to insert at the specified position : ");
            scanf("%d", &n);
            insert_spec(n);
            break;

        case 4:
            delete_beg();
            break;

        case 5:
            delete_end();
            break;

        case 6:
            delete_spec();
            break;

        case 7:
            traverse();
            break;

        case 8:
            exit(1);

        default:
        {
            printf("Wrong choice, Please try again later");
        }
        }
    }
    return 0;
}