#include<stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;
	if (argc == 1)
	{
		printf("You only have one argument, you suck!\n");
		printf("Here is your loser argument : %s\n", argv[0]);
	}
	else if (argc > 1 && argc < 4)
	{
		printf("Here is your arguments : \n");
		for (i = 0; i < argc ; i++)
		{
			printf("Arguemnt number %d  : %s \n", i, argv[i]);
		}
		printf("\n");
	}
	else 
	{
		printf("You have too many arguments, you suck.\n");
	}

	return 0;
}
