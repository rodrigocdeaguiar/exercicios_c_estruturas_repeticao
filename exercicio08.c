#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=1, num, menorNum, maiorNum;
	while(i<=10){
		printf("\n%i", i);
		printf("\nDigite um número inteiro: ");
		scanf("%i", &num);
		if(i==1){
			menorNum=num;
			maiorNum=num;
		}else{
			if(num<menorNum){
				menorNum=num;
			}
			if(num>maiorNum){
				maiorNum=num;
			}
		}
		i++;
	}
	printf("\nMaior número = %i", maiorNum);
	printf("\nMenor número = %i", menorNum);
	return 0;
}
