/*
 * File : 0-print_listint.c
 * Auth : Felix Fleku
 */

/**
 * print_listint - prints elements of all the linked lists
 * @h: This the linked list of listin_t to print
 * Entry :Always 0
 * Return: Number of nodes
 */
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}
	return (number);
}

