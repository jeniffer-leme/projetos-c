#include <stdio.h>
#include <math.h>

void add(){
    int num, num2, resultado;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultado = num + num2;

    printf("O resultado e %d\n\n", resultado);
}


void sub(){
    int num, num2, resultado;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultado = num - num2;

    printf("O resultado e %d\n\n", resultado);
}


void mult(){
    int num, num2, resultado;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    
    printf("Digite outro numero: ");
    scanf("%d", &num2);

    resultado = num * num2;

    printf("O resultado e %d\n\n", resultado);
}


void div(){
    float num, num2, resultado;
    
    printf("Digite um numero: ");
    scanf("%f", &num);

    
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    if(num2 == 0){
        printf("Nao e possivel fazer divisao por 0. Tente novamente!\n\n");
    }else{
        resultado = num / num2;

        printf("O resultado e %2.f\n\n", resultado);
    }
}


void pot(){
    double num, num2;
    
    printf("Digite um numero para a base: ");
    scanf("%lf", &num);

    
    printf("Digite outro numero para a potencia: ");
    scanf("%lf", &num2);

    printf("O resultado e %2.lf\n\n", pow(num, num2));
} 


void raiz(){
    double num;
    
    printf("Digite um numero: ");
    scanf("%lf", &num);

    printf("O resultado e %2.lf\n\n", sqrt(num));
}


int main(){
    int opcao;

    do{
        printf("\t---Menu---\n");
        printf("1. Adicao\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potencia\n");
        printf("6. Raiz Quadrada\n");
        printf("0. Sair\n");

        printf("Escolha uma das opcoes: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                add();
                break;

            case 2:
                sub();
                break;

            case 3:
                mult();
                break; 
                
            case 4:
                div();
                break;

            case 5:
                pot();
                break;
                
            case 6:
                raiz();
                break;    

            case 0:
                printf("Voce saiu!\n");
                break;    

            default:
            printf("Opcao Invalida\n");
        }
    }while(opcao != 0);

    return 0;
}
