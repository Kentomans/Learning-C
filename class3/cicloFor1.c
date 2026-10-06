#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
void aleatorio();
void dividirNum();
void abc();

int main()
{
    srand(time(NULL));
    menu();
    return 0;
}

void menu()
{
    int opc;
    do
    {
        printf("\n---MENU PRINCIPAL---\n");
        printf("1) Aleatorio\n");
        printf("2) Dividir numero\n");
        printf("3) Abecedario\n");
        printf("4) Salir\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            aleatorio();
            break;
        case 2:
            dividirNum();
            break;
        case 3:
            abc();
            break;
        case 4:
            /* code */
            break;

        default:
        printf("\nOpcion No valida");
            break;
        }
    } while (opc != 4);
}

void aleatorio(){
    int total = 0, numA = 0;
    printf("\nTotal de numeros a generar: ");
    scanf("%d", &total);

    for (int i = 1; i <= total; i++){
        numA = rand() % 100 + 1;
        printf("%d \n", numA);
    }
    
}

void dividirNum(){
    int num = 0, digito=0;
    printf("\nIngrese el numero a dividir: ");
    scanf("%d", &num);
    if(num>0){
        while (num>0)
        {
            digito=num%10;
            printf("%d \n", num);
            num = num/10;
        }
    }else{
        printf("\nEl numero no se puede dividir");
    }
    
}

void abc(){

    for(char i='a'; i<='z'; i++){
        printf("%c \n", i);
    }
}
