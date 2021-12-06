#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char *data;
    struct node *next;
} Node;

int main()
{
    Node *head = NULL;
    head = (Node *)malloc(sizeof(Node));

    Node *node1 = (Node *)malloc(sizeof(Node));
    head->next = node1;
    node1->data = "화";

    Node *node2 = (Node *)malloc(sizeof(Node));
    node1->next = node2;
    node2->data = "수";
    node2->next = NULL;

    Node *tmp = head;
    while (tmp != NULL)
    {
        printf("%s\n", tmp->data);
        tmp = tmp->next;
    }

    free(head);
    free(node1);
    free(node2);

    return (0);
}