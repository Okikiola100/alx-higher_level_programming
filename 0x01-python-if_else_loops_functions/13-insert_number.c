#include "lists.h"

/**
 * Author: Oladapo Okikiola a.k.a. Okikiola100
 * insert_node - Inserts a number into a sorted singly-linked list
 * @head: A pointer the head of the linked list.
 * @number: The number to insert.
 * Return: If the functions fails - NULL.
 * Otherwise - a pointer to the new code.
 */
listint_t *insert_node(listint_t **head, int nuumber)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new-> = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
