#include <stdio.h>

int main() {
    int opcion;
    float cantidad, resultado;

    // Tasas de cambio aproximadas
    float quetzal_dolar = 0.13;
    float quetzal_euro = 0.12;
    float dolar_quetzal = 7.70;
    float euro_quetzal = 8.30;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    if(opcion == 1){
        resultado = cantidad * quetzal_dolar;
        printf("Resultado: %.2f dolares\n", resultado);
    }
    else if(opcion == 2){
        resultado = cantidad * quetzal_euro;
        printf("Resultado: %.2f euros\n", resultado);
    }
    else if(opcion == 3){
        resultado = cantidad * dolar_quetzal;
        printf("Resultado: %.2f quetzales\n", resultado);
    }
    else if(opcion == 4){
        resultado = cantidad * euro_quetzal;
        printf("Resultado: %.2f quetzales\n", resultado);
    }
    else{
        printf("Opcion no valida\n");
    }

    return 0;
}