# C The Hard Way
## Ex1 : dust off that compiler

```=
#include<stdio.h>
```
* this includes the libray(header file). it consists of several io function such as `printf`

```=
int main(int argc, char * argv[])...
```
* `char * ` is the c's way to say string
* `[]` is the c's way to say it is an array
* `char * argv[]` is an array of string

```=
return 0
```
* all main function return a value to the operating system.
* the returned value can be viewed using `echo $?`

## Ex2 : use makefile to build

```=
make ex1
CFLAGS="-Wall" make ex1
```
* system variable defined before command is only applicable to the command
* the make program will take the arguments from the system variable, and then call the compiler program `cc`

```=
cc -Wall ex1.c -o ex1
```

### Makefile
`make` auto-source a file called `Makefile` in the same directory, it is called a makefile script. With this file you can
* use similar syntax as bash script
* define system variables like `CFLAGS` for the `make` command
* map a `make` `option` to a block of code to be executed.

```=
option : 
	code ...
	code ...
```
* syntax for option-code mapping in `Makefile`

```=
make clean
rm -f ex01
```
* effect of running `make` with an option `clean`

```=
make 
```
* `make` automatically run the first `option` (default option)
* so it is wise to define a default option in the `Makefile` such as `all`

```=
make clean all
```
* run a series of bash codes 
* `clean` removes the old binary
* `all` regen the binary

## Ex 3 : formatted output
* `printf` will assign memory location for the placeholder
* if the placeholder is not subsituted, then it contains garbage value.
* uninialized variable will have default initial value

## Ex 4 : using a debugger

## Ex 5 : memorizing c operators

## Ex 6 : memorizing c syntax
* auto
* enum
* extern
* goto
* register
* typedef
* union
* volatile

## Ex 7 : variables and types
* In C, characters are represented by small integers. which can do math on them.

```=
char c = '\0'
```
* the character is a `null` character, but also integer 0

```=
%e
```
* scentific placeholder for really small numbers.

```=
%%
```
* print a percentage sign instead of treated as a placeholder.

## Ex 8 : if , else-if, else

```=
printf("%s", argv[0])
```
* this always gives the full address of the binary.

## Ex 14 : writing and using function

```=
#include<ctype.h>
```
* character type library that gives functions to handle characters
* `isalpha` and `isblank` are part of it.

```=
#include<string.h>
```
* string related functions, such as `strlen`

```=
int funct(char c);
```
* forward declaration, tell the compiler to ignore it for now when encouter it until defined later.

