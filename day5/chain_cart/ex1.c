#include <stdio.h>

int main() {
    char texte[100];

    printf("Entrez un texte : ");
    fgets(texte, sizeof(texte), stdin);

    printf("Vous avez saisi : %s", texte);

    return 0;
}
