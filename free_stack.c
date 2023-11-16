/*
* File_name: free_stack.c file
* Functions: void free_stack
* Created: On November 16, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: monty
* Project: 0x19.C-Stacks, Queues-LIFO, FIFO
* Directory: monty
*/

#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @head: head of the stack
 *
 */

void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
