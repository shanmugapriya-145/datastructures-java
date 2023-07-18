//reverse the given list of elements using singly linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
	int data;
	struct Node* next;
};

static void reverse(struct Node**ptr)
{
	struct Node* prev = NULL;
	struct Node* current = *ptr;
	struct Node* next = NULL;
	while (current != NULL) {
		next = current->next;
	    current->next = prev;
        prev = current;
		current = next;
	}
	*ptr = prev;
}
void push(struct Node** ptr, int new_data)
{
	struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = (*ptr);
	(*ptr) = new_node;
}
void printList(struct Node* head)
{
	struct Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
int main()
{
	struct Node* head = NULL;
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
    push(&head,1);
	printf("Given linked list\n");
	printList(head);
	reverse(&head);
	printf("\nReversed linked list \n");
	printList(head);
	getchar();
}
