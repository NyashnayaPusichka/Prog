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
	*str1 = '\0';
	printf("s=");
	do s[i] = _getche(); while (s[i++] != enter);
	s[i - 1] = '\0';
	i = 0;
	printf("\ns1=");
	gets_s(s1, MAX);
	puts("Results:");
	x = strlen(s);
	strncat(str1, s, 2);
	for (int n = 2; n <= x; n *= 2)
	{
		strcat(str1, s1);
		strncat(str1, s + n, n * 2 - n);
	}
	puts(str1);
	_getch();
	return 0;
}
