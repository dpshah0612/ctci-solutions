#include "forward_list_utils.h"

void del_node(node_t **head_ref, uint32_t index)
{
    node_t *current;
    node_t *prev = NULL;
    uint32_t counter;

    if (*head_ref ==  NULL)
        return;

    for (current = *head_ref, counter = 0; current != NULL; prev = current, current = current->next, counter++) {
        if (index == 0) {
            *head_ref = (*head_ref)->next;
            free(current);
            return;
        }
        if (counter == index) {
            prev->next = current->next;
            free(current);
            return;
        }
    }
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
	printf("deleting 0th node from the list\n");
	del_node(&head, 0);
	printf("list after deleting 0th node\n");
    print_list(head);
	return 0;
}
