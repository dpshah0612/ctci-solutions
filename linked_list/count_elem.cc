#include "forward_list_utils.h"

uint32_t count_elem(node_t *head, int elem)
{
	uint32_t count = 0;
	node_t *node = head;

	while(node) {
		if (node->elem == elem)
			count++;
		node = node->next;
	}

	return count;
}

int main(int argc, char **argv)
{
	node_t *head = NULL;

	if (argc < 2) {
		printf("Usage: <prog_name> <elem_1> <elem_2> ...\n");
		return -1;
	}

	build_list_from_args(&head, argc-1, &argv[1]);
	print_list(head);

	printf("elem 5 appeared %u time in list\n", count_elem(head, 5));
	return 0;
}
