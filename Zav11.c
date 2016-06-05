#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3

int main(){
	
	int A[3][3], B[3][3], C[3][3];
	int x, y, z;
	
	srand(time(0));
	for (x = 0; x < N; x++)
        for (y = 0; y < N; y++){
            A[x][y] = rand() % 10;
            B[x][y] = rand() % 10;
        }
	
	for(x = 0; x < N; x++)
        for(y = 0; y < N; y++){
            C[x][y] = 0;
			for(z=0; z< N; z++)
			    C[x][y] += A[x][z] * B[z][y];
    }

    for(x = 0; x < N; x++)
        for(y = 0; y < N; y++){
            C[x][y] = 0;
			for(z = 0; z < N; z++)
			    C[x][y] += A[x][z] * B[z][y];
		}
    
    printf("matrix A:\n");
    
	for (x = 0; x < N; x++){
        for (y = 0; y < N; y++)
            printf("%d ", A[x][y]);
            printf("\n");
    }

    printf("\nmatrix B:\n");
   
    for (x = 0; x < N; x++){
        for (y = 0; y < N; y++)
            printf("%d ", B[x][y]);
            printf("\n");
    }
    
	printf("\nThe result of multiplying: \n");
    
	for (x = 0; x < N; x++){
        for (y = 0; y< N; y++)
            printf("%3d ", C[x][y]);
            printf("\n");
	}
system("pause");
	return 0;
	
}
