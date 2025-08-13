#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));
    int num = rand()%10;
    int num2;


    while(1){

    printf("Digite o seu palpite: ");
    scanf("%d", &num2);

    if(num == num2){
        printf("Parabens! Voce acertou!!\n");
        break;
    }

    if(num > num2){
        printf("Voce errou, o numero e maior. Tente Novamente!\n");
    }

    if(num < num2){
        printf("Voce errou, o numero e menor. Tente Novamente!\n");
    }

    }

    return 0;
}
