#include <stdio.h>
#include <conio.h>

int main(){
	int num=1, cont=0;
	while(cont<5){
		if(num%3==0){
			printf("\n%i", num);
			num++;
			cont++;
		}
		num++;
	}
	return 0;
}
