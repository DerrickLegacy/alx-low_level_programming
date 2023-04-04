#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 10);
	add_nodeint(&head, 20);
	add_nodeint(&head, 30);
	print_listint(head);
	return (0);
}
