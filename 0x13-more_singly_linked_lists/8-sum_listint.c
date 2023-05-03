#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: (i)
 */

int sum_listint(listint_t *head)
{
int i = 0;
listint_t *temp = head;
while (temp)
{
i += temp->n;
temp = temp->next;
}
return (i);
}
