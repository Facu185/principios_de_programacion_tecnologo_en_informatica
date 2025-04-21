//Programa que concatena dos strings.
#include <string.h>
#include <stdio.h>
//Funcion que concatena dos strings.
char *stract(char *string1, const char *string2);

int main() {
    char string1[50] = "Hola "; // Cambié esto para tener suficiente espacio para ambas cadenas
    const char string2[] = "como estas";
    stract(string1, string2);
    printf("%s\n", string1); // Agregué un salto de línea aquí
    return 0;
}

char *stract(char *string1, const char *string2) {
    strcat(string1, string2);
    return string1;
}

