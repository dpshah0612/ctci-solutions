#include <stdio.h>
#include <stdlib.h>
#include "linked_list_def.h"
#include "linked_list_utils.h"

void push_elem(node_t **head_ref, int new_elem)
{
	node_t *new_node = (node_t *)malloc(sizeof(node_t));
	if (!new_node) {
		printf("Can't alloc memory for node\n");
		return;
	}

	new_node->elem = new_elem;
	new_node->next = *head_ref;
	*head_ref = new_node;
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
