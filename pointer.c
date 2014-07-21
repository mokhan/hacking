#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char message[20];
  char *pointer;
  char *pointer2;


  strcpy(message, "Hello, world!\n");
  pointer = message;
  printf("%s", pointer);

  pointer2 = pointer + 2;
  printf("%s", pointer2);
  strcpy(pointer2, "y you guys!\n");
  printf("%s", pointer);

  return 0;
}
