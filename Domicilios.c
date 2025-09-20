#include <stdio.h>

int main(){
    int opcion;
    printf("Bienvenido a PollosHermaos\n");    
    printf("-------------Menu------------\n");
    printf("1. Pollo asado\n");
    printf("2. Pollo broster\n");
    printf("3. Arroz Paisa\n");
    printf("4. Pechuga a la plancha\n");
    printf("5. Adicional de papas fritas\n");
    printf("6. Adicional de arroz\n");
    printf("7. Salchipapa\n");
    printf("8. Gaseosa\n");
    printf("9. Cerveza\n");
    printf("Todos los combos vienen con gaseosa personal y papas fritas\n\n");

    printf("Seleccione su orden del menu: \n");
    scanf("%d", &opcion);

    switch (opcion) {

        case 1: 
        int opcion2;
            if (opcion == 1) {                
                printf("\n1. Cuarto de pollo\n");
                printf("2. 1/2 pollo\n");
                printf("3. Pollo Asado\n");
                printf("4. Pollo en combo\n");

                printf("\nSelecciona una de las siguientes opciones: \n\n");
                scanf("%d", &opcion2);

                switch(opcion2) {
                    case 1:
                        printf("El cuarto de pollo cuesta 9.000 \n");
                        break;
                    case 2:
                        printf("El 1/2 pollo cuesta 16.000 \n");
                        break;
                    case 3:
                        printf("El pollo asado cuesta 30.000 \n");
                        break;
                    case 4:
                        printf("El pollo en combo cuesta 36.000 \n");
                        break;
                    default:
                        printf("Por favor elige una opción valida \n");
                        break;
                }
            }
            break;
/*        
        case 2:
            int opcion2;
            if (opcion == 1) {
                printf("Selecciona una opcion\n: ");
                printf("1. Cuarto de pollo\n");
                printf("2. 1/2 pollo\n");
                printf("3. Pollo Asado\n");
                printf("4. Pollo en combo\n");

                scanf("%d, &opcion2");

                switch (opcion2) {
                    case 1:

                }
            }


        default:
            if (opcion <= 0 || opcion > 9) {
                    printf("Por favor ingrese una opcion valida");
                }*/
    }


    return 0;
}

