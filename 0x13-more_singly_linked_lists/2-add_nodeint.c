#include "lists.h"

/**
 * add_nodeint - function adds new node to beginnig of list
 * @head: pointer
 * @n: integer
 * Return: the list with the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
