#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

int main()
{
	int A[N][M];
	int i, d;

	for (i = 0; i < 5; ++i) {
		for (d = 0; d < 5; ++d) {
			if (i == 0 || d == 0) {
				A[i][d] = 1;
			}
			else {
				A[i][d] = 0;
			}
			if (i % 4 == 0) {
				A[i][d] = 1;
			}
			else if (d % 4 == 0) {
				A[i][d] = 1;
			}
			
		}
	}

	printf("Dvyhmernii massiv:\n");
	int sch = 0;
	for (i = 0; i < 5; ++i) {
		for (d = 0; d < 5; ++d) {
			printf("%d", A[i][d]);
			++sch;
			if (sch == 5) {
				printf("\n");
				sch = 0;
			}
		}
	}

	getchar();
	return 0;
}
