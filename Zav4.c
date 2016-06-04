#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int mas[100][100];
    int i, j, razmer;
	
	printf("Vveidte razmer = ");
	scanf("%d", &razmer);
	
	for(i=0;i<razmer; i++){
	for (j=0; j<razmer; j++){
	if(i >= razmer - 1){
	mas[i][j] = 0;
	} else {
	mas[i][j] = 1;
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
