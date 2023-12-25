#include <stdio.h>
#include <conio.h>

int main(){
	int i=0;
	printf("\n");
	while(i<=100){
		printf("%i ", i);
		i++;
	}
	printf("\n");
	for(i=0;i<=100;i++){
		printf("%i ", i);
	}
	i=0;
	printf("\n");
	do{
		printf("%i ", i);
		i++;
	}while(i<=100);
	return 0;
}
