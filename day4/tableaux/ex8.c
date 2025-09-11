#include <stdio.h>

int main() {
    int nbrElem;
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&nbrElem);
    int table[nbrElem];
    int tableCopy[nbrElem];
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table[i]);
    }
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
      tableCopy[i] = table[i];
    }
    printf("Les elements de tableau 1 sonts: ");
     for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("%d",table[i]);
        if (i != (sizeof(table)/sizeof(table[0])) - 1) {
            printf(", ");
        }
    }
    printf("\nLes elements de tableau 2 sonts: ");
     for (int i = 0; i < sizeof(tableCopy)/sizeof(tableCopy[0]);i++) {
        printf("%d",tableCopy[i]);
        if (i != (sizeof(tableCopy)/sizeof(tableCopy[0])) - 1) {
            printf(", ");
        }
    }

}