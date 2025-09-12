#include <stdio.h>

void mettre_en_minuscules(char texte[]) {
    int i;
    for (i = 0; texte[i] != '\0'; i++) {
        if (texte[i] >= 'A' && texte[i] <= 'Z') {
            texte[i] = texte[i] + 32;
        }
    }
}

int main() {
    char texte[] = "Bonjour Le Monde";

    mettre_en_minuscules(texte);

    printf("Texte en minuscules : %s\n", texte);

    return 0;
}
