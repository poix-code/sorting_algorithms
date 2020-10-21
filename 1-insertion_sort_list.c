#include "sort.h"
/**
 * insertion_sort_list - Sorts a double linked list in ascending order,
 *                       using the 'insertion sort algorithm.
 * @list: list to be ordered.
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *forth, *back;

	if (!list || !*list)
		return;
	for (forth = (*list)->next; forth; forth = tmp)
	{
		tmp = forth->next;
		back = forth->prev;
		while (back && forth->n < back->n)
		{
			back->next = forth->next;
			if (forth->next)
				forth->next->prev = back;
			forth->prev = back->prev;
			forth->next = back;
			if (back->prev)
				back->prev->next = forth;
			else
				*list = forth;
			back->prev = forth;
			back = forth->prev;
			print_list(*list);
		}
	}
}
