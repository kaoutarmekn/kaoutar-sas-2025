#include <stdio.h>
#include <string.h>

int main() {
    char texte[100];
    int debut = 0, fin;

    printf("Entrez une chaîne : ");
    fgets(texte, sizeof(texte), stdin);

    if (texte[strlen(texte) - 1] == '\n') {
        texte[strlen(texte) - 1] = '\0';
    }

    fin = strlen(texte) - 1;

    while (debut < fin) {
        char temp = texte[debut];
        texte[debut] = texte[fin];
        texte[fin] = temp;
        debut++;
        fin--;
    }
