#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numPar=0, i=0;
	while(i<50){
		numPar+=2;
		printf("\n%i", numPar);
		i++;
	}
	return 0;
}
