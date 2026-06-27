#include<stdio.h>

/*Exiba o maior valor dentre três  números distintos | Display the largest value among three distinct numbers*/
int main(){
    int numero1, numero2, numero3, maior;
    printf("Digite o primeiro valor inteiro:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", &numero2);
    printf("Digite o terceiro valor inteiro:\n");
    scanf("%d", &numero3);
    
    maior = numero1;
    if(numero2 > maior){
        maior = numero2;
    }
    else {
        if(numero3 > maior){
            maior = numero3;
        }
    }    
    printf("O maior valor corresponde a: %d\n", maior);
    
    return 0;
}