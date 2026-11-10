//---METODOS DE ORDENACION Y BUSQUEDA -----
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

//Prototipo - Declaracion de la funcion
void menu();				//menu();
void llenar(int vector[]);  //llenar(vector);
void mostrar(int vector[]); //mostrar(vector);
bool buscarExiste(int datoB, int vector[]); //existe=buscarExiste(datoB,vector);
int buscarCant(int datoB, int vector[]); //cantidad = buscarCant(datoB,vector);
void buscarPosi(int datoB, int vector[]); //buscarPosi(datoB,vector);
void ordenar(int vector[]); //ordenar(vector);


//Implementacion 
int main(){
	srand(time(NULL));
	menu();	//llamada
	return 0;
}

void menu(){
	int opc, vector[TAM], datoB=0, cantidad=0, posi=0;
	bool existe=false;
	do{
		printf("\n\nMENU DE BUSQUEDAS Y ORDENACION \n");
		printf("Buscar existencia ......... 1\n");
		printf("Buscar posicion ........... 2\n");
		printf("Buscar cantidad ........... 3\n");
		printf("Ordenar ................... 4\n");
		printf("Salir  .................... 5\n");
		printf("Tu opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1: printf("\nBusqueda por existencia\n");
					llenar(vector);
					mostrar(vector);
					printf("Dato a buscar: ");
					scanf("%d",&datoB);
					existe = buscarExiste(datoB,vector);
					if (existe){
						printf("El dato si se encuentra en el vector\n");
					}else{
						printf("El dato no se encuentra\n");
					}
					break;
			case 2: printf("\nBusqueda por cantidad\n");
					llenar(vector);
					mostrar(vector);
					printf("Dato a buscar: ");
					scanf("%d",&datoB);
					cantidad = buscarCant(datoB,vector);
					printf("Total %d\n",cantidad);
					break;
			case 3: printf("\nBusqueda por posicion\n");
					llenar(vector);
					mostrar(vector);
					printf("Dato a buscar: ");
					scanf("%d",&datoB);
					buscarPosi(datoB,vector);
					break;
			case 4: llenar(vector);
					mostrar(vector);
					ordenar(vector);
					mostrar(vector);
			default: //instrucciones
					break;
		}//switch
	}while(opc!=5);
}//menu

void llenar(int vector[]){
	for(int i=0; i<TAM; i++){
		vector[i] = rand() % 51;
	}//i
}

void mostrar(int vector[]){
	for(int i=0; i<TAM; i++){
		printf("%d ",vector[i]);
	}//i
	printf("\n\n");
}//mostrar

bool buscarExiste(int datoB, int vector[]){
	bool existe=false;
	for(int i=0; i<TAM; i++){  //recorrido del vector
		if (vector[i] == datoB){
			existe = true; //vale true cuando lo encontramos
			break; /*usar break dentro de un ciclo provoca la
				finalizacion del ciclo */
		}//if
	}//i
	return existe;	
}

int buscarCant(int datoB, int vector[]){
	int cant=0;
	for(int i=0; i<TAM; i++){  //recorrido del vector
		if (vector[i] == datoB){
			cant++;
		}//if
	}//i
	return cant;
}

void buscarPosi(int datoB, int vector[]){
	for(int i=0; i<TAM; i++){  //recorrido del vector
		if (vector[i] == datoB){
			printf("%d  ",i);   //i+1 
		}//if
	}//i
	printf("\n");
}

void ordenar(int vector[]){
	int aux;
	for(int i=0; i<TAM-1; i++){  //para recorrer cada elemento
		for(int j=0; j<TAM-1; j++){
			if (vector[j] < vector[j+1]){  //comparar parejas de valores
				//intercambio
				aux = vector[j];
				vector[j] = vector[j+1];
				vector[j+1] = aux;
			}//if
		}//j
	}//i
}//ordenar








