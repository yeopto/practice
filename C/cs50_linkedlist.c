#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    node *n = (node *)malloc(sizeof(node));
    if(n == NULL)
        return (0);
    
    n->number = 1;
    n->next = NULL;
    list = n;

    n = (node *)malloc(sizeof(node));
    if(n == NULL)
        return (0);
    
    n->number = 2;
    n->next = NULL;
    list->next = n;

    n = (node *)malloc(sizeof(node));
    if(n == NULL)
        return (0);
    
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    node *tmp = list;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->number);
        tmp = tmp->next;
    }

    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }

    return (0);
}