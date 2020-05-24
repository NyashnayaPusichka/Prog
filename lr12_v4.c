#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 128


int sort_dec(float* arr, int n);

main()
{
	float m1[MAX], m2[MAX];
	unsigned int i, n;
	printf("n = "); scanf_s("%i", &n);
	if (n > 0 && n < MAX)
	{
			for (i = 0; i < n; i++)
			{
				printf("m1[%i] = ", i);
				scanf_s("%i", &m1[i]);
			}
			for (i = 0; i < n; i++)
			{
				printf("m2[%i] = ", i);
				scanf_s("%i", &m2[i]);
			}
			printf("Bubble sort:");
			printf("\nm1 transpositions = %i", sort_dec(m1, n));
			printf("\nm2 transpositions = %i", sort_dec(m2, n));
	}
	else printf("Wrong number");
	_getch();
	return 0;
}

int sort_dec(float* arr, int n)
{
	int c = 0;
	float t;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				c++;
			}
	return c;
}
