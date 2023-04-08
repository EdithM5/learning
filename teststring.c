#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "ac";
  char str2[] = "aa";

  int result = strcmp(str1, str2);

  if (result == 0){
    printf("The strings are equal\n");
  } else if (result < 0) {
    printf("str1 is less than str2\n");
  } else {
    printf("str1 is greater than str2\n");
  }
	printf("%i\n", result);

  return 0;
}

