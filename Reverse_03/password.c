#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[])
{

  if(argc != 2)
  {
    printf("Give me password :(.\n Usage : ./cybertalks_rev7 password\n");
	exit(0);
  }

  char* input = argv[1];
  char password[10] = "";

  if(strlen(argv[1]) != 8)
  {
	printf("Wrong Input Length Error!!\n");
	exit(0);
  }

  password[1]  = 0x70;
  password[2]  = 0x34;
  password[3]  = 0x73;
  password[4]  = 0x53;
  password[5]  = 0x77;
  password[6]  = 0x30;
  password[7]  = 0x72;
  password[8]  = 0x44;

  for(int i=0; i<strlen(argv[1]);i++)
  {
	if(password[i+1] == input[i])
	{
		if(i==7)
		{
			printf("Correct :)\n");
		}
	}

	else
	{
		printf("Wrong :(\n");
		exit(0);
	}
  }

  return 0;
}
