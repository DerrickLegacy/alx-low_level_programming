#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (head != NULL)
	{
		listint_t *ptr = malloc(sizeof(listint_t));

		if (ptr == NULL)
		{
		return (NULL);
		}
		else
		{
			ptr->n = n;
			ptr->next = NULL;
			ptr->next = *head;
			*head = ptr;
			return (ptr);
		}
	}
	return (NULL);
}
