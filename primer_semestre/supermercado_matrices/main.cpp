//Programa que modela articulos en oferta de un supermercado.
#include <stdio.h>
#include <stdbool.h>
#include <cstring>
#define MAX_PRODUCTOS 50
// Función para cargar un producto en el supermercado
void cargarProducto(char nombreProductos[MAX_PRODUCTOS][100], int precios[MAX_PRODUCTOS], int codigosDescuento[MAX_PRODUCTOS], int &tope);
// Función para mostrar los productos
void mostrarProductos(char nombreProductos[MAX_PRODUCTOS][100], int precios[MAX_PRODUCTOS], int codigosDescuento[MAX_PRODUCTOS], int tope);
// Función que realiza el descuento correspondiente al producto pasándole el código de barra y el precio
void aplicarDescuento(char nombreProductos[MAX_PRODUCTOS][100], int precios[MAX_PRODUCTOS], int codigosDescuento[MAX_PRODUCTOS], int codigoBarra);
 main() {
    char nombreProductos[MAX_PRODUCTOS][100];
    int precios[MAX_PRODUCTOS];
    int codigosDescuento[MAX_PRODUCTOS];
    int tope = 0;
    bool salida = true;
    int op = 0;

    while (salida) {
        printf("Ingrese 1) para cargar un producto.");
        printf("\nIngrese 2) para mostrar productos.");
        printf("\nIngrese 3) para aplicar descuento.");
        printf("\nIngrese 4) para salir.\n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                cargarProducto(nombreProductos, precios, codigosDescuento, tope);
                break;
            case 2:
                mostrarProductos(nombreProductos, precios, codigosDescuento, tope);
                break;
            case 3: 
                printf("Ingrese el código de barra del producto: ");
                int codigoBarra;    
                scanf("%d", &codigoBarra);
                aplicarDescuento(nombreProductos, precios, codigosDescuento, codigoBarra);
                break;
            case 4:
                salida = false;
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }
    }
}

void cargarProducto(char nombreProductos[MAX_PRODUCTOS][100], int precios[MAX_PRODUCTOS], int codigosDescuento[MAX_PRODUCTOS], int &tope) {
    if (tope >= MAX_PRODUCTOS) {
        printf("No se pueden cargar más productos.\n");
    }
    printf("Ingrese el nombre del producto: ");
    scanf(" %s", nombreProductos[tope]);  
    printf("Ingrese el precio del producto: ");
    scanf("%d", &precios[tope]);
    printf("Ingrese el código de descuento del producto \n0):sin descuento, \n1):20%. \n2):15%. \n3): 10%. \n");
    scanf("%d", &codigosDescuento[tope]);
    tope++;
}

void mostrarProductos(char nombreProductos[MAX_PRODUCTOS][100], int precios[MAX_PRODUCTOS], int codigosDescuento[MAX_PRODUCTOS], int tope) {
    for (int i = 0; i < tope; i++) {
        printf("Producto %d: %s\n", i + 1, nombreProductos[i]);
        printf("Precio: %d\n", precios[i]);
        printf("Código de Descuento: %d\n", codigosDescuento[i]);
    }
}

void aplicarDescuento(char nombreProductos[MAX_PRODUCTOS][100], int precios[MAX_PRODUCTOS], int codigosDescuento[MAX_PRODUCTOS], int codigoBarra) {
    if (codigoBarra < 0 || codigoBarra >= MAX_PRODUCTOS || codigoBarra >= sizeof(precios)/sizeof(precios[0])) {
        printf("Producto no encontrado.\n");
    }
    int precioFinal = precios[codigoBarra];
    int descuento = 0;
    switch (codigosDescuento[codigoBarra]) {
        case 0:
            descuento = 0;
            break;
        case 1:
            descuento = precioFinal * 0.20;
            break;
        case 2:
            descuento = precioFinal * 0.15;
            break;
        case 3:
            descuento = precioFinal * 0.10;
            break;
        default:
            printf("Código de descuento no válido.\n");
            return;
    }
    precioFinal -= descuento;
    printf("El precio final del producto %s con el descuento aplicado es: %d\n", nombreProductos[codigoBarra], precioFinal);
}