#include<stdio.h>

int main(int argc, char* argv[])
{
	int numbers[4] = { 0 };
	char chars[4] = {'a','a','\0','a'};

	printf("numberrs : %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("characters : %c %c %c %c \n", chars[0], chars[1], chars[2], chars[3]);

	printf("characters_all_together : %s\n", chars);

	//set up numbers
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	//set up the chars
	chars[0] = 'Z';
	chars[1] = 'e';
	chars[2] = 'd';
	chars[3] = '\0';

	printf("numbers : %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);

	printf("characters : %c %c %c %c \n", chars[0], chars[1], chars[2], chars[3]);

	printf("characters_all_together : %s\n", chars);

	return 0;
}
