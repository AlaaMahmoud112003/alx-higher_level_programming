#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
* insert_node - inserts a node in a sorted list
* @head: dounle pointer to the head
* @number: the number to be added
* Return:  pointer to the added node
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
