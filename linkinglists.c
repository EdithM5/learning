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
	while (current != NULL)
	{
		printf("%d \n", current-> data);
		current = current-> next;
	}
}
void insertatbeginning(struct Node** head2, int new_data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = new_data;
	newNode-> next = *head2;
	*head2 = newNode;
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

	insertatbeginning(*head, 7);

	printlist(head);
	return 0;
}
