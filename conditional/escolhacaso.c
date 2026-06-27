#include <stdio.h>

/**Conversor de moedas comerciais | Commercial currency converter*/
int main(){
    printf("Escolha a moeda que deseja converter:\n");
    printf("1 - Real\n");
    printf("2 - Peso Argentino\n");
    printf("3 - Euro\n");
    int opcao;
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Sua escolha foi Real.\n");
            break;
        case 2:
            printf("Sua escolha foi Peso Argentino.\n");
            break;
        case 3:
            printf("Sua escolha foi Euro.\n");
            break;
        default:
            printf("Opção inexistente.\n");
    }
    return 0;
}