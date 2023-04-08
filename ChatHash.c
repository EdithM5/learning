#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 100

int hash(char *str) {
  int hash = 0;
  while (*str) {
    hash = hash * 31 + *str;
    str++;
  }
  return hash;
}

int main()
{
	printf("%i\n", hash("june"));
	return 0;
}
