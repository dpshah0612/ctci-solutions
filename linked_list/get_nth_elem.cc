#include "forward_list_utils.h"

int get_elem(node_t *head, int index)
{
	uint32_t count = 0;

	for (node_t *current = head; current != NULL; current = current->next, count++) {
		if (count == index)
			return current->elem;
	}

	// reached the end of list so user must have asked for non-existent index in the list so we assert here
	printf("The list doesn't have %u index\n", index);
	assert(0);
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

	printf("4th elem in list is:  %u\n", get_elem(head, 4));
	return 0;
}
