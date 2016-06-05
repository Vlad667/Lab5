#include <stdio.h>
#include <stdlib.h>


int main()
{

	int i, j, razmer;
	int mas[100][100];
	
	printf("Vvedite razmer = ");
	scanf("%d", &razmer);
	
	for(i=0; i<razmer;i++) 
    {
	for(j = 0; j < razmer; j++)
			if(i <= razmer / 2) 
            {
			if((j >= i) && (j < (razmer - i)))
			mas[i][j] = 0;
			else
			mas[i][j] = 1;
			} 
            else 
            {
			if((j <= i) && (j >= razmer - i - 1))
			mas[i][j] = 0;
			else
			mas[i][j] = 1;
			}
	}
	
	for(i=0;i<razmer;i++) 
    {
	for(j=0;j<razmer;j++)
	printf("%3d", mas[i][j]);
	printf("\n");
	}
	
	system ("pause");
	return 0;
}

