#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int mas[100][100];
    int x, y, razmer;
	
	printf("Vvedite razmer = ");
	scanf("%d", &razmer);
	
	for(x = 0; x < razmer; x++)
    {
	 for ( y = 0; y < razmer; y++)
        {
			if(y >= razmer - y)
            {
			mas[x][y] = 1;
			} else {
			mas[x][y] = 0;
			}
		}
	}

	
	for(x = 0; x < razmer; x++)
    {
	for(y = 0; y < razmer; y++)
	printf("%3d", mas[x][y]);
	printf("\n");
	}
	system("pause");
	return 0;
}
