//mai.c
#include <stdio.h>
#include "reciprocal.hpp"
in main (int arc, char ** argr)
{
	int i;
	i = atoi(argv[1]);
	printf("1/%f""=%f\n", i,reciprocal(i));
	return 0;
}

--------------------------
#include <stdio.h>
int main(int argc, char **argv)
{
	printf("argc = %d \n", argc);
	printf("1o arg: %s \n", argv[0])
	return 0;
}
// main.c


$ gcc main.c-o olaargc
$./olaargc
$./olaargc 123
$./olaargc ABC
