#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
	int data;
	struct Node* next;
};

void printlist(struct Node* head)
{
	struct Node* current = head;
	printf("we start here.\n");
	while (current != NULL)
	{
		printf("%d \n", current-> data);
		current = current-> next;
	}
	printf("and end here.\n");
}
void insertatbeginning(struct Node** head2, int new_data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = new_data;
	newNode-> next = *head2;
	*head2 = newNode;
}

void deleteFirstNode(struct Node** head3)
{
	struct Node* temp = *head3;
	*head3 = (*head3) -> next;
	free(temp);
}

void reverselist(struct Node** head4)
{
	struct Node* prev = NULL;
	struct Node* current = head4;
	struct Node* next = NULL;

	while (current != Null)
	{
		next = current -> next;
		current-> next = prev;
		prev = current;
		current = next;
	}
	*head4 = prev;
}

int main()
{
	struct Node* head = NULL;
	struct Node* first = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;

	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));

	head-> data = 1;
	head-> next = first;

	first-> data = 2;
	first-> next = second;

	second-> data = 3;
	second-> next = third;

	third-> data = 4;
	third-> next = NULL;
	
	printlist(head);

	deleteFirstNode(&head);

	printlist(head);

	insertatbeginning(&head, 7);

	printlist(head);
	return 0;
}
