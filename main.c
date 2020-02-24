#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

int main()
{
	int A[N][M];
	int i, d;

	for (i = 0; i < N; ++i) {
		for (d = 0; d < M; ++d) {
			if (i == 0 || d == 0) {
				A[i][d] = 1;
			}
			else {
				A[i][d] = rand()%2;
			}
			if (i == N-1) {
				A[i][d] = 1;
			}
			else if (d == M-1) {
				A[i][d] = 1;
			}
			
		}
	}

	printf("Dvyhmernii massiv:\n");
	int sch = 0;
	for (i = 0; i < N; ++i) {
		for (d = 0; d < M; ++d) {
			printf("%d", A[i][d]);
			++sch;
			if (sch == M) {
				printf("\n");
				sch = 0;
			}
		}
	}

	getchar();
	return 0;
}
