/*
* File_name: f_pstr.c file
* Functions: void f_pstr
* Created: On November 16, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: monty
* Project: 0x19.C-Stacks, Queues-LIFO, FIFO
* Directory: monty
*/

#include "monty.h"

/**
 * f_pstr - It prints string starting at the top
 *          of the stack,followed by a new
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @head: The stack head
 *
 * @counter: The line_number
 *
 * Return: no return
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
