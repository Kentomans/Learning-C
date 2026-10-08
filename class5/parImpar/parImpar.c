#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void parImpar();

int main(){
    srand(time(NULL));
    parImpar();
    return 0;
}

void parImpar(){
    int n = 1, sumImpa = 0, conPar=0;
    float sumPar = 0, proPar=0;

    for(int i = 1; i<=270; i++){
        n = rand() % 50 + 1;

        if(n != 0){
            if(n % 2 == 0){
                sumPar+=n;
                conPar ++;
            }else{
                sumImpa+=n;
            }
        }
    }

    printf("La suma de los numeros impares: %d", sumImpa);

    proPar = sumPar / conPar;
    printf("\nEl promedio de los numeros pares es: %.2f", proPar);
}