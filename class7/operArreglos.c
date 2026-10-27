//------ OPERACIONES CON ARREGLOS NUMERICOS ------
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define TAM 10

//Prototipo - Declaracion de la funcion
void menu();
void llenar(int vector[],int lim);
bool comparar(int vecA[], int vecB[]);
void mostrar(int vec[]);
int longitud(int vec[]);

int main(){
	srand(time(NULL));
	menu();	//llamada
	return 0;
}

//Implementacion 
void menu(){
	int opc, vecA[TAM], vecB[TAM], vecC[]={5,6,3,4}, tama=0;
    bool res = false;
    
	do{
		printf("\nMENU PRINCIPAL \n");
		printf("Tamano del vector ......... 1\n");
		printf("Invertir el vector......... 2\n");
		printf("Copiar vector ............. 3\n");
		printf("Comparar .................. 4\n");
		printf("Salir ..................... 5\n");
		printf("Tu opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:  
            tama = longitud(vecC);
            printf("\nLongitud de vecC: %d\t", tama);
					break;
			case 2:  //instrucciones
					break;
			case 3:  //instrucciones
					break;
			case 4: 
            llenar(vecA, 11);
            mostrar(vecA);
            llenar(vecB, 11);
            mostrar(vecB);
            res = comparar(vecA, vecB); 
            if(res){
                printf("Los arreglos son iguales \n");
            }else{
                printf("Los arreglos no son iguales\n");
            }
            break;
            default: //instrucciones
					break;
		}//switch
	}while(opc!=5);
}//menu

void llenar(int vector[],int lim){
	for(int i=0; i<TAM; i++){
		vector[i] = rand() % lim;
	}//i
}

bool comparar(int vecA[], int vecB[]){
    bool resultado = false;
    int contIguales = 0;
    for(int i=0; i<TAM; i++){
        if(vecA[i] == vecB[i]){
        contIguales ++;
        }
    }

    if(contIguales == TAM){
        resultado = true;
    }

    return resultado;
}

void mostrar(int vec[]){
    for(int i=0; i<TAM; i++){
        printf("%d\t", vec[i]);
    }
    printf("\n\n");
}

int longitud(int vec[]){
    int tam = 0;
    tam = sizeof(vec)/sizeof(vec[0]);
    return tam;
}
