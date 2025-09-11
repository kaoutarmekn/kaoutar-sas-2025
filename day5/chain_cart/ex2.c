#include <stdio.h>

int main() {
    char texte[100];
    int i = 0;

    printf("Entrez un texte : ");
    fgets(texte, sizeof(texte), stdin);

    while (texte[i] != '\0') {
        i++;
    }

    printf("La longueur de la chaîne est : %d\n", i - 1);

    return 0;
}
