#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){
	
	if (argc == 2) {
		printf("Checking the License key: %s\n ", argv[1]);
		int sum = 0;		
		for(int i = 0; i < strlen(argv[1]); i++){
			sum += (int)argv[1][i];
		}
		if (sum == 582) {
			printf("Access Granted\n");
			printf("--------------------------------\n");
			printf("The key is\n");
			int c = function();
			word_generator(c);
		} else {
			printf("WRONG!!!");
		}
	}
	else {
		printf("Usage: <License key>\n");
	}
}

int function() {
	int f = 582;
	int a = f / 2;
	int c = 0;
	for (int i = 1; i<10; i++){
		c += a % i;
	}
	return c;
}

void word_generator(int number) {

	number = number * 4;
	transfer(number);
	number += 25;
	transfer(number);
	int _number = number;
	number -= 30;
	transfer(number);
	number += 8;
	transfer(number);
	number += 12;
	transfer(number);
	transfer(_number);
	number -= 5;
	transfer(number);
	number += 19;
	transfer(number);
}


void transfer(int number){

	int c = number;
	char word = c;
	printf("%c", c);


/*
	char str[7];
	int i = 0;

	char c = number;

	str[i] = c;
	printf("The key is");
	printf(str[i]);
	i++;
*/
}