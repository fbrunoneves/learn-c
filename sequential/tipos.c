#include <stdio.h>
#include <stdbool.h> //Necessário para usar o tipo bool| Necessary to use bool type

int main(){
    //Declaração de variáveis | Variable declaration
    int a = 3;
    float b= 1.4;
    bool c = true; // True em C é 1 e False é 0 | True in C is 1 and False is 0
    
    //Imprime os valores das variáveis | Print variable values
    printf("Valor de a: %d\n", a);
    //.2f para formatar float com 2 casas decimais | .2f to format float with 2 decimal places
    printf("Valor de b: %.2f\n", b);
    //Sem formatação específica para float | Without specific formatting for float
    //printf("Valor de b: %f\n", b);  
    printf("Valor de c: %d\n", c);

    return 0;
}
