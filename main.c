#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){
	int i,j;
	int grade[5];
	int sum=0;

	
	for(i=0;i<5;i++){
		printf("grade[%i]=",i);
		scanf("%d",&grade[i]);
	}
	printf("\n");
	
	
	for(j=0;j<5;j++){
		printf("grade[%i]=%i\n",j,*(grade+j) );
		sum+=*(grade+j);	
	}
	printf("\n");
	
	printf("average : %i",sum/5);
	return 0;
}
