#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *t);
size_t print_listint_safe(const listint_t *t);

/**
 * looped_listint_len - It counts the number of unique nodes
 * in a looped listint_t linked list.
 * @t: A pointer to the head of the listint_t to check.
 *
 * Return: If list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *t)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;
if (t == NULL || t->next == NULL)
return (0);
tortoise = t->next;
hare = (t->next)->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = t;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}
tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}
return (nodes);
}
tortoise = tortoise->next;
hare = (hare->next)->next;
}
return (0);
}

/**
 * print_listint_safe - Function prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);
if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
