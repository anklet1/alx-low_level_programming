/*
 * File: 1-listint_len.c
 * Auth; Felix Fleku
 */

/**
 * listint_len - returns the number of  elements in the linked listint_int list
 * Entry: Always 0
 * @h: linked list ype listint_t to traverse
 *
 * Return:Number of nodes
 */
#include "lists.h"

size_t listint_len(const listint_t *h)
{
	size_t node = 0;
		while (h)
	{
		node++;
			h = h->next;
	}

	return (node);
}

