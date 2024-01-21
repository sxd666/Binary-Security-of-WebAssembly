#include <stdio.h>
#include <stdlib.h>

int test(int a, int b) {
	int c;
	printf("child val: %p\n", &c);
    return a^b;
}

const char s1[] = "11111";
char s2[] = "s22222";

int main(int argc, char ** argv) {
	int *p = malloc(0x10);
	printf("heap1: %p\n", p);
	int *p2 = malloc(0x10);
	printf("heap2: %p\n", p2);
	int a,b,c;
	printf("stack val: %p\n", &a);
	printf("stack val: %p\n", &b);
	printf("stack val: %p\n", &c);

	test(1,2);

	printf("s1: %p\n", s1);
	printf("s2: %p\n", s2);
}