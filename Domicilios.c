#include <stdio.h>
#include <string.h>


int main(){
    int opcion, opcion2, opcion3, opcion4, opcion5, opcion6, opcion7, opcion8, opcion9;
    int total = 0;
    int pedido = 0;
    char respuesta[3];
    char items[50][50];
    int precios[50];

    printf("Bienvenido a PollosHermaos\n"); 
    printf("Todos los combos vienen con gaseosa y papas fritas\n\n");
    
    do {
        printf("-------------Menu------------\n");
        printf("1. Pollo asado\n");
        printf("2. Pollo broster\n");
        printf("3. Arroz Paisa\n");
        printf("4. Pechuga a la plancha\n");
        printf("5. Adicionalales\n");
        printf("6. Salchipapa\n");
        printf("7. Gaseosa\n");
        printf("8. Cerveza\n\n");
        

        printf("Seleccione su orden del menu: ");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1: {   
                printf("\n\nPulse 0 para volver atras\n");        
                printf("\n\n1. Cuarto de pollo - 9.000\n");
                printf("2. 1/2 pollo asado - 16.000\n");
                printf("3. Pollo completo asado - 30.000\n");
                printf("4. Pollo asado en combo\n - 40.000");

                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion2);

                if (opcion2 == 0) continue;

                switch(opcion2) {
                    case 1:
                        strcpy(items[pedido],"Cuarto de pollo asado"); precios[pedido++] =9000;
                        break;
                    case 2:
                        strcpy(items[pedido],"1/2 pollo asado"); precios[pedido++] =16000;
                        break;
                    case 3:
                        strcpy(items[pedido],"Pollo completo asado"); precios[pedido++] =30000;
                        break;
                    case 4:
                        strcpy(items[pedido],"Pollo asado en combo"); precios[pedido++] =40000;
                        break;
                    default:
                        printf("Por favor elige una opción valida ");
                        break;
                }
                break;        
            }

            case 2: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Cuarto de pollo broster - 11.000\n");
                printf("2. 1/2 pollo broster - 19.000\n");
                printf("3. Pollo completo broster - 36.000\n");
                printf("4. Pollo broster en combo - 46.000\n");

                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion3);

                if (opcion3 == 0) continue;

                switch(opcion3) {
                    case 1:
                        strcpy(items[pedido],"Cuarto de pollo broster"); precios[pedido++] =11000;
                        break;
                    case 2:
                        strcpy(items[pedido],"1/2 pollo broster"); precios[pedido++] =19000;
                        break;
                    case 3:
                        strcpy(items[pedido],"Pollo completo broster"); precios[pedido++] =36000;
                        break;
                    case 4:
                        strcpy(items[pedido],"Pollo broster en combo"); precios[pedido++] =46000;
                        break;
                    default:
                        printf("Por favor elige una opción valida");
                        break;
                    }
                break;        
            }
            case 3: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Arroz paisa sencillo - 15.000\n");
                printf("2. Arroz paisa familiar - 28.000\n");
                printf("3. Arroz paisa en combo - 36.000\n");
                
                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion4);

                if (opcion4 == 0) continue;
                
                switch(opcion4) {
                    case 1:
                        strcpy(items[pedido],"Arroz paisa sencillo"); precios[pedido++] =15000;
                        break;
                    case 2:
                        strcpy(items[pedido],"Arroz paisa familiar"); precios[pedido++] =28000;
                        break;
                    case 3:
                        strcpy(items[pedido],"Arroz paisa en combo"); precios[pedido++] =36000;
                        break;
                    default:
                        printf("Por favor elige una opción valida");
                        break;
                    }
                break;        
            }
            case 4: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Pechuga a la plancha - 15.000\n");
                printf("2. Pechuga a la plancha en combo - 22.000\n");
                
                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion5);

                if (opcion5 == 0) continue;
                
                switch(opcion5) {
                    case 1:
                        strcpy(items[pedido],"Pechuga a la plancha"); precios[pedido++] =15000;
                        break;
                    case 2:
                        strcpy(items[pedido],"Pechuga a la plancha en combo"); precios[pedido++] =22000;
                        break;
                    default:
                        printf("Por favor elige una opción valida");
                        break;
                    }
                break;        
            }
            case 5: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Adicional arroz - 5.000\n");
                printf("2. Adicional platano con bocadillo - 6.000\n");
                printf("3. Adicional papas fritas - 7.000\n");
                
                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion6);

                if (opcion6 == 0) continue;

                switch(opcion6) {
                    case 1:
                        strcpy(items[pedido],"Adicional arroz"); precios[pedido++] =5000;
                        break;
                    case 2:
                        strcpy(items[pedido],"Adicional platano con bocadillo"); precios[pedido++] =6000;
                        break;
                    case 3:
                        strcpy(items[pedido],"Adicional papas fritas"); precios[pedido++] =7000;
                        break;
                    default:
                        printf("Por favor elige una opción valida");
                        break;
                    }
                break;        
            }
            case 6: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Salchipapa para dos - 16.000\n");
                printf("2. Salchipapa para cuatro - 28.000\n");
                
                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion7);

                if (opcion7 == 0) continue;

                switch(opcion7) {
                    case 1:
                        strcpy(items[pedido],"Salchipapa para dos"); precios[pedido++] =16000;
                        break;
                    case 2:
                        strcpy(items[pedido],"Salchipapa para cuatro"); precios[pedido++] =28000;
                        break;
                    default:
                        printf("Por favor elige una opción valida");
                        break;
                    }
                break;        
            }
            case 7: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Gaseosa personal - 2.500\n");
                printf("2. Gaseosa 1.5L - 4.000\n");
                printf("3. Gaseosa 3L - 6.000\n");
                
                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion8);

                if (opcion8 == 0) continue;

                int cantidad;
                printf("Cuantas deseas? ");
                scanf("%d", &cantidad);

                if (cantidad <= 0)
                break;

                switch(opcion8) {
                    case 1:
                        strcpy(items[pedido],"Gaseosa personal"); precios[pedido++] =2500 * cantidad;
                        break;
                    case 2:
                        strcpy(items[pedido],"Gaseosa 1.5L"); precios[pedido++] =4000 * cantidad;
                        break;
                    case 3:
                        strcpy(items[pedido],"Gaseosa 3L"); precios[pedido++] =6000 * cantidad;
                        break;
                    default:
                        printf("Por favor elige una opción valida \n");
                        break;
                    }
                break;        
            }
            case 8: {
                printf("\n\ Pulse 0 para volver atras\n"); 
                printf("\n\n1. Cerveza nacional - 4.500\n");
                printf("2. Cerveza importada - 6.000\n");
                
                printf("\nSelecciona una opcion: \n");
                scanf("%d", &opcion9);

                if (opcion9 == 0) continue;

                int cantidad;
                printf("Cuantas deseas? ");
                scanf("%d", &cantidad);

                if (cantidad <= 0)
                break;

                switch(opcion9) {
                    case 1:
                        strcpy(items[pedido],"Cerveza nacional"); precios[pedido++] =4500 * cantidad;
                        break;
                    case 2:
                        strcpy(items[pedido],"Cerveza importada"); precios[pedido++] =6000 * cantidad;
                        break;
                    default:
                        printf("Por favor elige una opción valida \n");
                        break;
                    }
                break;        
            }
            default:
                printf("\nPor favor ingrese una opcion valida");
    }

    printf("\nDeseas agregar algo más? (si/no): ");
    scanf("%s", respuesta);

    } while (strcmp(respuesta,"si") == 0);

    printf("\n=================================\n");
    printf("       DETALLE DE SU ORDEN       \n");
    printf("=================================\n");

    for (int i = 0; i < pedido; i++) {
        printf("- %s: %d\n", items[i], precios[i]);
        total += precios[i];
    }

    printf("---------------------------------\n");
    printf("TOTAL: %d\n", total);
    printf("Gracias por su compra en PollosHermanos!\n");
    printf("=================================\n");

    return 0;
}


