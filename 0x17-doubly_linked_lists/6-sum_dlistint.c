#include "lists.h"

/**
 * sum_dlistint - Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int num_element = 0;

	while (head)
	{
		num_element += head->n;
		head = head->next;
	}

	return (num_element);
}
