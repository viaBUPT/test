#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i = 1;
	char * p = (char *)(&i);
	if (*p) {
		printf("little_endian\n");
	} else {
		printf("big_endian\n");
	}
	printf("aaaaaaaaa \
		    bbbbbbbbb \
		    ccccccccc \n");
	/* 错误，编译不通过 */
	/*
	printf("aaaaaaaaa
		    bbbbbbbbb
		    ccccccccc\n");
	*/
}