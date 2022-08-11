#include "lists.h"
/**
 * insert_node - hi
 * @head: hi
 * @number: hi
 * Return: hi
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = number;
	node->next = NULL;

	if (!(*head))
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while ((*head)->next && ((*head)->next->n < node->n))
	{
		(*head) = (*head)->next;
	}
	node->next = (*head)->next;
	(*head)->next = node;
	return (node);
}
