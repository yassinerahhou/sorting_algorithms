#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list.
 *
 * @list: Double pointer to the head of the linked list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current = (*list)->next;
if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

while (current != NULL)
{
listint_t *temp = current->next;
listint_t *sorted = current->prev;

while (sorted != NULL && sorted->n > current->n)
{
sorted->next = current->next;

if (current->next != NULL)
current->next->prev = sorted;

current->prev = sorted->prev;
current->next = sorted;

if (sorted->prev != NULL)
sorted->prev->next = current;
else
*list = current;

sorted->prev = current;
sorted = current->prev;
}

current = temp;
print_list(*list);
}
}

