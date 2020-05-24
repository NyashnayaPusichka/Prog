#include <stdio.h>
#include <conio.h>
#define MAX 128

int sort_dec(float* arr, int n);

main()
{
	float m[MAX];
	unsigned int i, n;
	printf("n = "); scanf_s("%i", &n);
	if (n > 0 && n < MAX)
	{
		for (i = 0; i < n; i++)
		{
			printf("m1[%i] = ", i);
			scanf_s("%i", &m[i]);
		}
		for (i = 0; i < n; i++)
		{
			if (m[i + 1] = m[i] + 1)
				printf("m = %5.2f  m = %5.2f", m[i + 1], m[i] + 1)
		}
	}
	else printf("Wrong number");
	_getch();
	return 0;
}

int sort_dec(float* arr, int n)
{
	float t;
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
}
