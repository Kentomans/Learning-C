#include <stdio.h>

void lluviA();

int main(){
    lluviA();
    return 0;
}

void lluviA(){
    int mes = 0, rno = 0, rce = 0, rsu = 0, arno = 0, arce = 0, arsu = 0, mersU = 50000, proRce = 0;

    for(int i = 1; i <= 12; i++){
        printf("\nIngresa la lluvia del mes %d:\n", i);

        printf("Norte: ");
        scanf("%f", &rno);

        printf("Centro: ");
        scanf("%f", &rce);

        printf("Sur: ");
        scanf("%f", &rsu);

        arno += rno;
        arce += rce;
        arsu += rsu;

        if(rsu < mersU){
            mersU = rsu;
            mes = i;
        }
    }

    proRce = arce / 12;

    printf("\nPromedio anual de la region Centro: %.2f", proRce);
    printf("\nMes con menor lluvia en la region Sur: %d", mes);
    printf("\nRegistro de lluvia: %.2f", mersU);

    if(arno > arce && arno > arsu){
        printf("\nLa region con mayor lluvia es Norte");
    }else if(arce > arno && arce > arsu){
        printf("\nLa region con mayor lluvia es Centro");
    }else{
        printf("\nLa region con mayor lluvia es Sur");
    }
}