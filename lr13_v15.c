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
	
	for(int i = 0, i2 = 0; str[i] != '\0'; ++i)
		if (isdigit(str[i]))
		{
			// TODO
		}
	
	printf("Result: %s", num)
	_getch();
	return 0;
}
