#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[128], num[sizeof(str) * 2];
	*num = '\0';
	printf("String: ");
	gets_s(str, sizeof(str));
	
	int sum = 0;
	for(int i = 0, i2 = 0; str[i] != '\0'; ++i)
		if (isdigit(str[i]))
		{
			sum += i;
			num[i2++] = (char)(i + 48);
			num[i2++] = ' ';
		}
	
	num[i2 - 1] = '\0';
	printf("Result: %s\nSum: %i", num, sum)
	_getch();
	return 0;
}
