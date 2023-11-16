/*
* File_name: f_rotl.c file
* Functions: void f_rotl.c
* Created: On November 16, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: monty
* Project: 0x19.C-Stacks, Queues-LIFO, FIFO
* Directory: monty
*/

#include "monty.h"

/**
  * f_rotl- It rotates the stack to the top
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @head: The head of the stack
 *
 * @counter: The line_number
 *
 * Return: no return
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
