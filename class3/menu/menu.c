#include <stdio.h>

void menu();

int main()
{
    menu();
    return 0;
}

void menu()
{
    int opc;
    do
    {
        printf("\n---MENU PRINCIPAL---\n");
        printf("Opcion 1 .....\n");
        printf("Opcion 2 .....\n");
        printf("Opcion 3 .....\n");
        printf("Opcion 4 ..Salir\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            /* code */
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
