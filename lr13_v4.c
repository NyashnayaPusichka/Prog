#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
	char str[256], sub[256], cat[sizeof(str) + sizeof(sub)];
	printf("String: ");
	gets_s(str, sizeof(str));
	printf("Substring: ");
	gets_s(sub, sizeof(sub));
	strcat(str1, sub, 0)
	
	
	system("pause");
	return 0;
}
