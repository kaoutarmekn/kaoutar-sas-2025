#include <stdio.h>

int main(){

char texte[100];

printf("entrez une phrase : ");
fgets(texte, sizeof(texte), stdin);
printf("vous ave saisi : %s" , texte);
    return 0;
}