#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\t", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head = NULL, *ptr;

    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        // Insert a new node at the end for each input
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            struct Node *ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }

            ptr->next = newNode;
        }
    }

    printf("Linked List:\n");
    linkedlistTraversal(head);

    printf("\nEnter data for node to insert at first: ");
    scanf("%d", &data);
    head = insertAtFirst(head, data);
    linkedlistTraversal(head);

    return 0;
}