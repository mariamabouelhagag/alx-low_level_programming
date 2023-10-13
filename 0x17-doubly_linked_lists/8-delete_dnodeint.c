#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (p == NULL)
			return (-1);
		p = p->next;
	}

	if (p == *head)
	{
		*head = p->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		p->prev->next = p->next;
		if (p->next != NULL)
			p->next->prev = p->prev;
	}

	free(p);
	return (1);
}
