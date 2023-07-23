#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 *
 * @list: Pointer to a pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current = (*list)->next;
listint_t *temp = *list;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

while (current != NULL)
{
listint_t *next = current->next;
listint_t *prev = current->prev;
int value = current->n;

while (prev != NULL && prev->n > value)
{
prev->next = current->next;
if (current->next != NULL)
current->next->prev = prev;
current->next = prev;
current->prev = prev->prev;
prev->prev = current;

if (current->prev == NULL)
*list = current;
else
current->prev->next = current;

prev = current->prev;
}

current = next;

while (temp != NULL)
{
printf("%d", temp->n);
if (temp->next != NULL)
printf(", ");
temp = temp->next;
}
printf("\n");
}
}

