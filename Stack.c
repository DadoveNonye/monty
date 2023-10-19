#include "monty.h"
/**
* free_stack - a funct that frees a doubly linked lis
* @head: Head of stack
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
