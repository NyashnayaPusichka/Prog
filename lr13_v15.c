#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[128];
	printf("String: ");
	gets_s(str, sizeof(str));
	
	
	_getch();
	return 0;
}
