#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
	char str[128], num[sizeof(str) / sizeof(*str) * 2], buffer[64];
	*num = '\0';
	printf("String: ");
	gets_s(str, sizeof(str) / sizeof(*str));
	
	int sum = 0;
	for (int i = 0; str[i] != '\0'; ++i)
		if (isdigit(str[i]))
		{
			strcat(num, itoa(i, buffer, 10));
			sum += i;
		}
	
	printf("Result: %s\nSum: %i", num, sum);
	system("pause");
	return 0;
}
