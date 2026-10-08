#include <stdio.h>

void factorial();

int main(){
    factorial();
    return 0;
}

void factorial(){
    int n = 0, facto = 1;

    printf("Ingrese el numero a calcular en factorial: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--){
        facto *= i;
        printf("%d * ", i);
    }

    printf("\tEl factorial es: %d", facto);
}