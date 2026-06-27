#include<stdio.h>
 
/*Verifique se o terceiro valor está entre os dois primeiros | Verify if the third value is between the first two*/
int main(){
  
    int numero1, numero2, numero3;
    printf("Digite o primeiro valor inteiro:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo valor inteiro:\n");
    scanf("%d", &numero2);
    printf("Digite o terceiro valor inteiro:\n");
    scanf("%d", &numero3);
    
    /*&& é o operador lógico E | && is the Logical AND operator
    || é o operador lógico OU | || is the Logical OR operator */
       
    if((numero3 > numero1 && numero3 < numero2) || (numero3 < numero1 && numero3 > numero2)){
        printf("Terceiro valor presente no intervalo entre os dois primeiros.\n");
    } else {
        printf("Terceiro valor ausente no intervalo entre os dois primeiros.\n");
    }
    return 0;
}