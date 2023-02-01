#include "lists.h"
/**
 * reverse_listint - reverse a listint
 * @head: pointer
 * Return: pointer to the first
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *ahead, *behind;

if (head == NULL || *head == NULL)
return (NULL);

behind = NULL;

while ((*head)->next != NULL)
{
ahead = (*head)->next;
(*head)->next = behind;
behind = *head;
*head = ahead;
}
(*head)->next = behind;
return (*head);
}

