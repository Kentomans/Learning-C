#include <stdio.h>

void fibo();

int main(){
    fibo();
    return 0;
}

void fibo(){
    int sig=0, pri=0, seg=1;

    for(int i=3; i<=180; i++){
        sig = pri+seg;
        pri = seg;
        seg=sig;
    }
    printf("%d",sig);
}