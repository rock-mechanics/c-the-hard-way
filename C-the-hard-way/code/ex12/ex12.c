#include<stdio.h>

int main(int argc, char* argv[])
{
	int areas[] = { 10, 12, 13, 14, 20 };
	//when assigned a character array, a '\0' character is automatically appended
	char name[] = "Zed";
	char full_name[] = {
						'Z', 'e', 'd',
						' ', 'A', '.', ' ',
						'S', 'h', 'a', 'w', '\0'
	};

	printf("The size of an int  : %lld\n" , sizeof(int));
	printf("The size of area(int[]) : %lld\n", sizeof(areas));

	printf("The number of ints in int[] : %lld\n", sizeof(areas)/sizeof(int));

	printf("The first area is %d, the second is %d.\n", areas[0], areas[1]);

	printf("The size of a char : %lld\n", sizeof(char));
	printf("The size of name (char[]) : %lld\n", sizeof(name));
	printf("The number of chars in char[] : %lld\n", sizeof(name)/sizeof(char));

	printf("Name is %s\nFull name is %s\n", name, full_name);

	return 0;
}
