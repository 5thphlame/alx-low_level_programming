#include "lists.h"

/**
 * add_nodeint_end - function adds node at the end of the list
 * @head: pointer to struct
 * @n: number
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *last = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
