#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TABLE_SIZE 100

struct node
{
	char* key;
	int value;
	struct node* next;
};

struct node* table[TABLE_SIZE];

int hash(char *str) {
  int hash = 0;
  while (*str) {
    hash = hash * 31 + *str;
    str++;
  }
  return hash;
}
void insert(char* key, int value)
{
	int index = hash(key) % TABLE_SIZE;

	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> key = (char*)malloc(strlen(key) + 1);
	strcpy(new_node ->key, key);
	new_node -> value = value;
	new_node -> next = table[index];
	table[index] = new_node;
}

int search(char* key)
{
	int index = hash(key) % TABLE_SIZE;

	struct node* current = table[index];
	//start at the head of the linked list
	
	while (current != NULL)
	{
		if (strcmp(current -> key, key) == 0)
		{
			return current -> value;
			//return the value if the key is found
		}
		current = current -> next;
		// move to the next node on the linked list
	}
	printf("key non-existent\n");
	return -1;
	// if key is not found
}

int main() 
{
  insert("apple", 3);
  insert("banana", 5);
  insert("cherry", 7);

  printf("The value of 'apple' is %d\n", search("apple"));
  printf("The value of 'banana' is %d\n", search("banana"));
  printf("The value of 'cherry' is %d\n", search("cherry"));
  printf("The value of 'orange' is %d\n", search("orange"));

  return 0;
}

