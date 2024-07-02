#include <stdio.h>
#include <stdlib.h>
#include "linked_list_def.h"
#include "linked_list_utils.h"


int push_elem(node **head, int elem)
{
	node_t *new_node = (node_t *)malloc(sizeof(node_t));
	if (!new_node)
		return -1;
	new_node->elem = elem;
	new_node->next = NULL;
	*head = new_node;

	return 0;
}

int main()
{
	node_t dummy;
	dummy.next = NULL;
	node_t *tail = &dummy;
	
	push_elem(&tail->next, 5);
	tail = tail->next;
	push_elem(&tail->next, 6);
	tail = tail->next;
	push_elem(&tail->next, 7);
	tail = tail->next;
	push_elem(&tail->next, 8);
	tail = tail->next;

	print_list(dummy.next);

	return 0;
}
