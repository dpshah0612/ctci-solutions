#ifndef FORWARD_LIST_UTILS_H
#define FORWARD_LIST_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked_list_utils.h"

node_t *tail = NULL;

void push_elem_at_tail(node_t **head_ref, int elem)
{
	node_t *new_node = (node_t *)malloc(sizeof(node_t));
	assert(new_node);
	new_node->elem = elem;
	new_node->next = NULL;

	if (*head_ref == NULL)
		*head_ref = new_node;
	if (tail)
		tail->next = new_node;

	tail = new_node;
	return;
}

void build_list_from_args(node_t **head_ref, int argc, char **argv)
{
	for (int i = 0; i < argc; i++) {
		push_elem_at_tail(head_ref, strtol(argv[i], NULL, 10));
	}
}

#endif //FORWARD_LIST_UTILS_H
