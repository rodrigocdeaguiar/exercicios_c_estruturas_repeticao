#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int num, i=0, maiorNum, numeros, contMaior=0;
    do{
        printf("\nDigite a quantidade de n�meros que ser�o digitados: ");
        scanf("%i", &numeros);
    }while(numeros<=0);
    system("cls");
    for(i; i<numeros; i++){
        printf("\nDigite um n�mero inteiro: ");
        scanf("%i", &num);
        if(i==0){
            maiorNum=num;
            contMaior++;
        }else{
            if(num>maiorNum){
                maiorNum=num; 
                contMaior++;
            }
        }
        system("cls");
    }
    printf("\nMaior n�mero digitado: %i", maiorNum);
    printf("\nN�mero de vezes que o maior n�mero foi lido: %i", contMaior);
    return 0;
}
