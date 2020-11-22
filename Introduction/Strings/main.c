#include <stdio.h>

int main() {
    // maximo 50 caracteres
    // char palabra[50] = "abcdefghijklmnñopqrstuvwxyz";

    // printf("%s", palabra);

    char nombre[20];

    printf("Inserte su nombre:\n");

    scanf("%20s", nombre);

    printf("Su nombre es: %s\n", nombre);
}