/*
* File_name: f_pall.c file
* Functions: void f_pall
* Created: On November 16, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: monty
* Project: 0x19.C-Stacks, Queues-LIFO, FIFO
* Directory: monty
*/

#include "monty.h"

/**
 * f_pall - It prints the stack
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @head: The stack head
 *
 * @counter: It have no used
 *
 * Return: no return
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
