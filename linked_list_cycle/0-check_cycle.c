#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to head of list
 * Return: Return 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *temp = list;

    while(list)
    {
        list = list->next;
        if (list == temp)
            return(1);
    }
    return(0);
}