#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100

int main()
{
	int M[MAX], size = 0;
	bool found = false;
	do {
		printf("M[%i] = ", size);
		scanf_s("%i", &M[size]);
		if (M[size] < 0) M[size] *= -1;
	} while (M[size] && ++size < MAX);

	for (int i = 0; i < size - 2; i++)
		if (M[i] == 1 && M[i + 1] == 1 && M[i + 2] == M[i] + M[i + 1])
		{
			printf("\nM[%i] = %i\n", i, M[i]);
			printf("M[%i + 1] = %i\n", i + 1, M[i + 1]);
			printf("M[%i + 2] = %i\n", i + 2, M[i + 2]);
			found = true;
			break;
		}

	if (!found) printf("Not found");
	_getch();
	return 0;
}
