#include <stdio.h>

const int TOTMIN = 60;
const int TOTSEG = 60;

void reloj();

int main(){
    reloj();
    return 0;
}

void reloj(){
 
    int min, seg;

    for(min=1; min<=TOTMIN; min++){
        for(seg=1; seg<=TOTSEG; seg++){
            printf("%d:%d \n", min, seg);
        }
        printf("\n");
    }

}
