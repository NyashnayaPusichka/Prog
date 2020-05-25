#include <stdio.h>
#include <conio.h>

void sort_dec(float* arr, int n);

int main()
{
	float m[128];
	unsigned i, n;
	printf("n = "); scanf_s("%i", &n);
	if (n > 0 && n < sizeof(m))
	{
		for (i = 0; i < n; i++)
		{
			printf("m1[%i] = ", i);
			scanf_s("%f", m + i);
		}
		for (i = 0; i < n - 1; i++)
			if (m[i + 1] == m[i] + 1)
			{
				printf("m[%i] =%f and m[%i] + 1 = %f",i + 1, m[i + 1], i, m[i] + 1);
				break;
			}
	}
	else printf("Wrong number");
	_getch();
	return 0;
}

void sort_dec(float* arr, int n)
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
