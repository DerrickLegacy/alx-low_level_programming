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
	add_nodeint_end(&head, 30);
	add_nodeint_end(&head, 234);
	add_nodeint_end(&head, 30);
	add_nodeint_end(&head, 43);
	add_nodeint_end(&head, 0);
	print_listint(head);
	return (0);
}
