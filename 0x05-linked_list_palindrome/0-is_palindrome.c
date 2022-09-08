#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * len_lsit - hi
 * @head: hi
 * Return: hi
 */
int len_lsit(listint_t **head)
{
	int i;
	listint_t *curr = *head;

	for (i = 0; curr != NULL; i++)
		curr = curr->next;
	return (i);
}
/**
 * rev_list - hi
 * @head: hi
 * Return: hi
 */
listint_t *rev_list(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next = NULL;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
/**
 * is_palindrome - hi
 * @head: hi
 * Return: hi
 */
int is_palindrome(listint_t **head)
{
	int len = len_lsit(head);
	int half_len = len / 2;
	int i, if_palindrome = 1;
	listint_t *current = *head;
	listint_t *reversed_head;
	listint_t *current_reversed;

	reversed_head = *head;
	for (i = 0; i < half_len; i++)
		reversed_head = reversed_head->next;
	if (len % 2 != 0)
		reversed_head = reversed_head->next;
	reversed_head = rev_list(&reversed_head);
	current_reversed = reversed_head;
	current = *head;
	while (current_reversed != NULL)
	{
		if (current_reversed->n != current->n)
			if_palindrome = 0;
		current_reversed = current_reversed->next;
		current = current->next;
	}
	return (if_palindrome);
}
