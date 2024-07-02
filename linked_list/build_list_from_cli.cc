#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "linked_list_def.h"
#include "linked_list_utils.h"
#include "forward_list_utils.h"

int main(int argc, char **argv)
{
	node_t *head = NULL;
	int val = 0;

	if (argc < 2) {
		printf("Usage: <prog_name> <list elem 1> <list elem 2> ...\n");
		return -1;
	}

	build_list_from_args(&head, argc-1, &argv[1]);

	print_list(head);
	return 0;
}

