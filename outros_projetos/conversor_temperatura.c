#include <stdio.h>

int variaveis(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    return num;

}

void celsius(){
    int num = variaveis();
    float fahrenheit, kelvin;

    fahrenheit = num * 1.8 + 32;
    printf("A conversao de CELSIUS para FAHRENHEIT e %.2fF\n", fahrenheit);

    kelvin = num + 273.15;
    printf("A conversao de CELSIUS para KELVIN e %.2fK\n\n", kelvin);
}


void fahrenheit(){
    int num = variaveis();
    float celsius, kelvin;

    celsius = 5.0 / 9 * (num - 32);
    printf("A conversao de FAHRENHEIT para CESLSIUS e %.2fC\n", celsius);

    kelvin = (num + 459.67) / 1.8;
    printf("A conversao de FAHRENHEIT para KELVIN e %.2fK\n\n", kelvin);
}


void kelvin(){
    int num = variaveis();
    float fahrenheit, celsius;

    celsius = num - 273.15;
    printf("A conversao de KELVIN para CESLSIUS e %.2fC\n", celsius);

    fahrenheit = num * 1.8 - 459.67;
    printf("A conversao de KELVIN para FAHRENHEIT e %.2fF\n\n", fahrenheit);
}

int main(){
    int opcao;

    do{
        printf("\t---Menu---\n");
        printf("1. Convertor de CESLSIUS\n");
        printf("2. Convertor de FAHRENHEIT\n");
        printf("3. Convertor de KELVIN\n");
        printf("0. Sair\n");

        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);

        switch (opcao){

        case 1:
            celsius();
            break;

        case 2:
            fahrenheit();
            break;
            
        case 3:
            kelvin();
            break;    

        case 0:
            printf("Voce saiu!\n");
            break;    
        
        default:
            printf("Opcao Invalida\n");
            break;
        }

    }while (opcao != 0);
    

    return 0;
}
