// Obtener cual es el numero mas grande de tuna lista de numeros

#include <stdio.h>
int main()
{
    int totNum = 0, num = 0, i = 1, nMayor = 0, nMenor = 0;

    printf("Ingrese el total de numeros en la lista: ");
    scanf("%d", &totNum);

    while (i <= totNum)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &num);

        if (i == 1)
        {
            nMayor = num;
            nMenor = num;
        }
        else
        {

            if (num > nMayor)
            {
                nMayor = num;
            }

            if (num < nMayor)
            {
                nMenor = num;
            }
        }
        i++;
    }

    printf("Mayor = %d", nMayor);
    printf(" Menor = %d", nMenor);
    return 0;
}