#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[128], buffer[64];
	char num[sizeof(str) / sizeof(*str) * 2];
	*num = '\0';
	printf("String: ");
	gets_s(str, sizeof(str) / sizeof(*str));

	int sum = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		if (isdigit(str[i]))
		{
			strcat(_itoa(i, buffer, 10), " ");
			strcat(num, buffer);
			sum += i;
		}

	int len = strlen(num);
	if (len) num[len - 1] = '\0';
	printf("Result: %s\nSum: %i\n", num, sum);
	system("pause");
	return 0;
}
