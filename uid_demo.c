#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
  printf("real uid: %d\n", getuid());
  printf("effective uid: %d\n", geteuid());
  return 0;
}
