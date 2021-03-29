#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{

  if(argc != 2)
  {
      printf("You forgot to enter your password!!!\n");
    	printf("Usage : ./easy_reverse password\n");
	    exit(0);
  }

  char *password = "e4sy_pe4sY_p4sSwoRd";

  if(strcmp(argv[1], password) == 0)
  {
	  printf("Correct :)\n");
  }

  else
  {
	  printf("Wrong :(\n");
  }

  return 0;
}
