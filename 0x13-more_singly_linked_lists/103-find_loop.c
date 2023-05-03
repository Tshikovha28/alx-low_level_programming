#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - This function finds the loop in a linked list
 * @t: linked list to search for
 *
 * Return: node address where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *t)
{
listint_t *slow = t;
listint_t *fast = t;
if (!t)
return (NULL);
while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = t;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
