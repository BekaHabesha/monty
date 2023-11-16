/*
* File_name: add_node.c file
* Functions: void addnode
* Created: On November 16, 2023
* Author: Bereket Dereje Mekonnen
* GitHub repository: monty
* Project: 0x19.C-Stacks, Queues-LIFO, FIFO
* Directory: monty
*/

#include "monty.h"

/**
 * addnode - It add node to the head stack
 *
 * Author: Bereket Dereje Mekonnen
 *
 * @head: The head of the stack
 *
 * @n: The new_value
 *
 * Return: no return
 */

void addnode(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
