#include "lists.h"

/**
 * add_nodeint - adds a new node at
 * @head: a pointer
 * @n: the integer for
 * Return: if the func
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_ *new;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = *head;

*head = new;

return (new);
}
