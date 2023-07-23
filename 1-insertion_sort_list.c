#include "sort.h"

/**
 * swap_nodes - Swap two nodes
 * @h: A pointer to the head
 * @n1: A pointer to the first
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
(*n1)->next = n2->next;
if (n2->next != NULL)
	n2->next->prev = *n1;
n2->prev = (*n1)->prev;
n2->next = *n1;
if ((*n1)->prev != NULL)
	(*n1)->prev->next = n2;
else
	*h = n2;
(*n1)->prev = n2;
*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked
 * @list: A pointer to the head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
listint_t *iterr, *insert_t, *tms;

if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

for (iterr = (*list)->next; iterr != NULL; iterr = tms)
{
	tms = iterr->next;
	insert_t = iterr->prev;
	while (insert_t != NULL && iterr->n < insert_t->n)
	{
		swap_nodes(list, &insert_t, iterr);
		print_list((const listint_t *)*list);
	}
}
}
