#include <stdio.h>
#include <stdlib.h>
#include "linked_list_def.h"
#include "linked_list_utils.h"

node_t *tail = NULL;

int push_elem(node **head, int elem)
{
	node_t *new_node = (node_t *)malloc(sizeof(node_t));
	if (!new_node)
		return -1;
	new_node->elem = elem;

	if (tail)
		tail->next = new_node;

	if (*head == NULL)
		*head = new_node;

	tail = new_node;

	return 0;
}

int main()
{
	node_t *head = NULL;
	push_elem(&head, 5);
	push_elem(&head, 6);
	push_elem(&head, 7);
	push_elem(&head, 8);

	print_list(head);

	return 0;
}
