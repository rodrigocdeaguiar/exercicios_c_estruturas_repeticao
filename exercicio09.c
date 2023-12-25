#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, numImpar=0, i=0;
	printf("\nDigite um número inteiro: ");
	scanf("%i", &n);
	while(i!=n){
		if(i==0){
			numImpar+=1;
		}else{
			numImpar+=2;
		}
		printf("\n%i", numImpar);
		i++;
	}
	return 0;
}
	
