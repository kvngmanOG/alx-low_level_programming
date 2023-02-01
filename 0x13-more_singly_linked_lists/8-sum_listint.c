#include "lists.h"
/**
 * sum_listint - calc the sum
 * @head: pointer
 * Return: if empty 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
