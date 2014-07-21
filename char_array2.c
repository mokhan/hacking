#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  char message[20];
  strcpy(message, "hello, world!");
  printf("%s", message);
  return 0;
}
