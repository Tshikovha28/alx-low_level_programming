#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe -This funtion frees a linked list
 * @a: is a pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */

size_t free_listint_safe(listint_t **a)
{
size_t len = 0;
int diff;
listint_t *temp;
if (!a || !*a)
return (0);
while (*a)
{
diff = *a - (*a)->next;
if (diff > 0)
{
temp = (*a)->next;
free(*a);
*a = temp;
len++;
}
else
{
free(*a);
*a = NULL;
len++;
break;
}
}
*a = NULL;
return (len);
}
