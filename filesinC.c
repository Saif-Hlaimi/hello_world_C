#include <stdio.h>

int main()
{

  char data[300];
  FILE *fptr, *fpt;
  fptr = fopen("the_file.txt", "r");

  while (fgets(data, 2, fptr))
  {
    printf("%s", data);
  }
  fclose(fptr);
  return 0;
}