#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Function  deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int m;
if (!head || !*head)
return (0);
m = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (m);
}

