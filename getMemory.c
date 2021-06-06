#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INVALID_POINTER_VALUE 0xFFFFFFFFL
const signed int INVALID_POINTER_VALUE_1 = 0xFFFFFFFF;

void GetMemory(char *p) {
	p = (char *)malloc(100);
	printf("%p\n", p);
}

char *getMemory(void) {
	char p[] = "hello world";
	printf("%p\n", p);
	printf("p = %s\n", p);
	return p;
}

void main1(void) {
	char *str1 = NULL;
	str1 = getMemory();
	printf("str1 = %p\n", str1);
	printf("str1 = %s\n", str1);
	printf(str1);
	printf("aaaaaaaaa\n");
	char *str = NULL;
	GetMemory(str);
	printf("%p\n", str);
	strcpy(str, "hello world");
	printf(str);
}

#define MUL(x, y)	x * y
#define ADD(x, y)	(x + y)
#define SUB(x, y)	(x - y)


void main(void)
{
	unsigned int uiE = 016;
	printf("uiE = %d\n", uiE);
	printf("eeeeeeeeeee\n");
	unsigned int uiB, uiC, uiD;
	uiB = (0xAA << 3) | (0xBB << 2) | (0xCC << 1);
	uiC = uiB & 0xDD;
	uiD = (0xAA << 3) | (0xBB << 2) | (0xCC << 1) & 0xDD;
	printf("uiB = 0x%x\n", uiB);
	printf("uiC = 0x%x\n", uiC);
	printf("uiD = 0x%x\n", uiD);
	printf("ddddddddddd\n");
	unsigned int uiA;
	uiA = (0xA6 & 0xB7) ^ (0xC5 | 0xD4);
	printf("uiA = 0x%x\n", uiA);
	printf("cccccccccccc\n");
	unsigned int uiSum;
	uiSum = MUL(ADD(9, 2), SUB(6, 3));
	printf("uiSum = %d\n", uiSum);
	printf("bbbbbbbbbb\n");
	printf("INVALID_POINTER_VALUE = %ld\n", INVALID_POINTER_VALUE);
	printf("INVALID_POINTER_VALUE_1 = %d\n", INVALID_POINTER_VALUE_1);
	printf("INVALID_POINTER_VALUE_1 = %ld\n", INVALID_POINTER_VALUE_1);
	short a[10] = {2, 4, 6, 8, 10, 12};
	int *p = (int *)a;
	printf("0x%x\n", p);
	printf("0x%x\n", p + 6);
	long aa = p;
	long bb = p + 6;
	printf("%d\n", bb - aa);
	printf("aaaaaaa\n");
	char *str = (char *) malloc(100);
	strcpy(str, "hello");
	free(str);
	if(str != NULL)
	{
		strcpy(str, "world\n");
		printf(str);
	}
}