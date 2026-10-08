#include <stdio.h>

void fibo();

int main(){
    fibo();
    return 0;
}

void fibo(){
     int  ant = 0, sig = 1, res =0, tot=0;

    printf("Ingrese hasta donde va a llegar la serie fibonachi: ");
    scanf("%d", &tot);

    for(int i = 1; i <=tot; i++){
        res = ant + sig;
        printf("%d \t", res);
        ant = sig;
        sig = res;
    }

}