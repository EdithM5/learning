#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_NAME 256
#define TABLE_SIZE 10
typedef struct
{
	char name[MAX_NAME];
	int age;
	//...add other stuff
} person;

person * hash_table[TABLE_SIZE];


unsigned int hash(char *name)
{
	int length = strnlen(name, MAX_NAME);
	unsigned int i = 0;
	for (int j = 0; j < length; j++)
	{
	      	i += name[j];
	      	i = (i * name[j]) % TABLE_SIZE;
	}
	
	return i;
}

bool init_hash_table()
{
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		hash_table[i] = NULL;
	}
	//table is empty
}

void print_table()
{
	printf("start\n");
	for (int i = 0; i < TABLE_SIZE; i++)
	{
		if (hash_table[i] == NULL)
		{
			printf("\t%i\t---\n", i);
		}
		else
		{
			printf("\t%i\t%s\n", i, hash_table[i]->name);
		}
	}
	printf("end\n");
}

bool hash_table_insert(person *p)
{
	if (p == NULL)
		return false;
	int index = hash(p->name);
	if (hash_table[index] != NULL)
	{
		return false;
	}
	hash_table[index] = p;
	return true;
}

person *hash_table_lookup (char *name)
{
	int index = hash(name);
	if (hash_table[index] != &&
		strncmp(hash_table[index] -> name, name, TABLE_SIZE) == 0)
	{
		return hash_table[index];
	}
	else
	{
		return NULL;
	}
}

int main()
{
	init_hash_table();
	print_table();

	person jacob = {.name="jacob", .age=26};
	person june = {.name="june", .age=32};
	person yacob = {.name="yacob", .age=22};
	person jack = {.name="jack", .age=46};

	hash_table_insert(&jacob);
	hash_table_insert(&june);
	hash_table_insert(&yacob);
	hash_table_insert(&jack);
	print_table();
/*
	printf("Jacob => %u\n", hash("Jacob"));
	printf("June => %u\n", hash("June"));
	printf("Yacob => %u\n", hash("Yacob"));
	printf("Jack => %u\n", hash("Jack"));
	printf("Bob => %u\n", hash("Bob"));*/

	return 0;
}
