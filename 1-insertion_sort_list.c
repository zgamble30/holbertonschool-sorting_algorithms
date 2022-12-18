#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * @list: doubly linked list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;

	if (!list)
		return;

	tmp = (*list)->next;
	while (tmp)
	{
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
			{
				tmp->next->prev = tmp->prev;
			}

			tmp->next = tmp->prev;
			tmp->prev = tmp->prev->prev;
			tmp->next->prev = tmp;

			if (!tmp->prev)
			{
				*list = tmp;
			}
			else
			{
				tmp->prev->next = tmp;
			}

			print_list(*list);
		}
		tmp = tmp->next;
	}
}
