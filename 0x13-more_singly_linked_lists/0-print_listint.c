#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - prints all elements of a linked list
 * @h: pointer to elements
 * Return: numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes;

	nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, nodes++;
	}
	return (nodes);
}
