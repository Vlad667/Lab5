#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mas[100][100];
    int i, j, razmer;
	
	printf("Vvedite razmer = ");
	scanf("%d", &razmer);
	
	for(i=0;i<razmer;i++){
	for (j=0;j<razmer;j++){
	if(i>=j){
	mas[i][j]=1;
	} else {
	mas[i][j] = 0;
	}
	}
	}

	
	for(i=0;i<razmer;i++){
		for(j=0;j<razmer;j++)
		printf("%3d", mas[i][j]);
		printf("\n");
	}
	system("pause");
	return 0;
}
