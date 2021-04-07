#include <stdio.h>
#include <sys/ptrace.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void flag_dest (void) __attribute__((destructor));
void trace_const(void) __attribute__((constructor));

void trace_const(void)
{
   if (ptrace(PTRACE_TRACEME, 0, 0, 0) == -1) {
	   printf("Debugger Kullanimi Yasaktir!!\n");
       _exit(-1);
   }
}

void flag_dest (void)
{
	char result[13] = "";
	char xor_key1[13] = "";
	char xor_key2[13] = "";

	xor_key2[0] = 0x1a;

	xor_key1[0]  = 0x48;
	xor_key1[1]  = 0x2e;
	xor_key1[2]  = 0x79;
	xor_key1[3]  = 0x59;
	xor_key1[4]  = 0x2a;
	xor_key1[5]  = 0x75;
	xor_key1[6]  = 0x74;
	xor_key1[7]  = 0x45;
	xor_key1[8]  = 0x5c;
	xor_key1[9]  = 0x76;
	xor_key1[10]  = 0x2e;
	xor_key1[11]  = 0x5d;
	
	result[0] = xor_key1[0] ^ xor_key2[0];
	result[1] = xor_key1[1] ^ xor_key2[0];
	result[2] = xor_key1[2] ^ xor_key2[0];
	result[3] = xor_key1[3] ^ xor_key2[0];
	result[4] = xor_key1[4] ^ xor_key2[0];
	result[5] = xor_key1[5] ^ xor_key2[0];
	result[6] = xor_key1[6] ^ xor_key2[0];
	result[7] = xor_key1[7] ^ xor_key2[0];
	result[8] = xor_key1[8] ^ xor_key2[0];
	result[9] = xor_key1[9] ^ xor_key2[0];
	result[10] = xor_key1[10] ^ xor_key2[0];
	result[11] = xor_key1[11] ^ xor_key2[0];
}

int main (int argc, char* argv[])
{
  
  printf("Hey, Find the Flag!\n");

  return 0;
}
