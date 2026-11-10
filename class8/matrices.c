#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define REN 3
const int COL = 3;

void menu();
llenarMan(int matriz[][COL]);
mostrar(int matriz[][COL]);
llenarAl(int matrizB[][COL]);
suma(int matrizA[][COL],int matrizB[][COL]);

int main(){
    srand(time(NULL));
    menu();
    return 0;
}

void menu(){
    int opc, escalar=0, sumaD, matrizA[REN][COL], matrizB[REN][COL];

    do{
        printf("\n---OPERACIONES CON MATRICES---\n");
        printf("Suma de matrices ...............1\n");
        printf("Multiplicacion por escalar .....2\n");
        printf("Suma de la diagonal ............3\n");
        printf("Marco de la matriz .............4\n");
        printf("Salir ..........................5\n");
        scanf("%d", &opc);

        switch (opc){
        case 1:
            llenarMan(matrizA);
            mostrar(matrizA);
            printf("\n");
            llenarAl(matrizB);
            mostrar(matrizB);
            printf("\n");
            suma(matrizA,matrizB);
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;

        default:
            break;
        }
    } while (opc != 4);
}


llenarMan(int matriz[][COL]){
    for(int i = 0; i<REN; i++){
        for(int j= 0; j< COL; j++){
            printf("\nIntroduce el valor [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            
        }
    }
}

llenarAl(int matriz[][COL]){
    for(int i = 0; i<REN; i++){
        for(int j= 0; j< COL; j++){
           matriz[i][j]= rand() % 31; 
        }
        printf("\n");
    }
}

mostrar(int matriz[][COL]){
    for(int i = 0; i<REN; i++){
        for(int j= 0; j< COL; j++){
           printf("\n%d", matriz[i][j]);
        }
        printf("\n");
    }
}

//suma(int matrizA[][COL],int matrizB[][COL]){}
