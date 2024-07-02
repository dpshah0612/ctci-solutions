#ifndef LINKED_LIST_UTILS_H
#define LINKED_LIST_UTILS_H

#include "linked_list_def.h"

void print_list(node_t *head)
{
	printf("List:\n");
	while (head) {
		printf("%d -> ", head->elem);
		head = head->next;
	}
	printf("NULL\n");
}

#endif //LINKED_LIST_UTILS_H
