#include <stdio.h>

int main(int argc, const char *argv[])
{
  printf("The 'int' data type is\t\t %d bytes\n", (unsigned int)sizeof(int));
  printf("The 'unsigned int' data type is\t\t %d bytes\n", (unsigned int)sizeof(unsigned int));
  printf("The 'short int' data type is\t\t %d bytes\n", (unsigned int)sizeof(short int));
  printf("The 'long int' data type is\t\t %d bytes\n", (unsigned int)sizeof(long int));
  printf("The 'long long int' data type is\t\t %d bytes\n", (unsigned int)sizeof(long long int));
  printf("The 'float' data type is\t\t %d bytes\n", (unsigned int)sizeof(float));
  printf("The 'char' data type is\t\t %d bytes\n", (unsigned int)sizeof(char));
  return 0;
}
