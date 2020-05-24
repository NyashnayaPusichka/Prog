#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 128

main()
{
	const char enter = '\r';
	char s[MAX];
	printf("s=");
	gets_s(s, MAX);
	_getch();
	return 0;
}
