#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

#define MAX 128

main()
{
	const char enter = '\r';
	int i = 0, x, z = 1, n = 0;
	char s[MAX], s1[MAX];
	char str1[2000];
	printf("s=");
	gets_s(s, MAX);
	printf("\ns1=");
	gets_s(s1, MAX);
	_getch();
	return 0;
}
