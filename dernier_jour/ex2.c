#include <stdio.h>
#include <string.h>

int main() {
    char texte[] = "Le chat noir dort. Le chien joue !";
    char resultat[100];
    int j = 0;

    for (int i = 0; i < strlen(texte); i++) {
        if (texte[i] != '.' && texte[i] != ',' && texte[i] != '!' &&
            texte[i] != '?' && texte[i] != ';' && texte[i] != ':') {
            resultat[j] = texte[i];
            j++;
        }
    }

    resultat[j] = '\0';

    printf("%s\n", resultat);

    return 0;
}
