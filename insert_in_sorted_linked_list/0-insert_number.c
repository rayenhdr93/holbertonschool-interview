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
	listint_t *tmp;

	if (!head)
		return (NULL);
	tmp = *head;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = number;
	node->next = NULL;
	if (!(*head) || (*head)->n > node->n)
	{
		node->next = *head;
		*head = node;
		return (*head);
	}
	while (tmp->next && (tmp->next->n < node->n))
	{
		tmp = tmp->next;
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
