#include "sort.h"
/**
 *insertion_sort_list - Sorts a doubly linked list of integers
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	current = (*list)->next;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	while (current != NULL)
	{
		listint_t *temp = current;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;
			if (temp->prev == NULL)
				*list = temp;
			else
				temp->prev->next = temp;
			print_list(*list);
		}
		current = current->next;
	}
}
