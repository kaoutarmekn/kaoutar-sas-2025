#include <stdio.h>

int main() {
    int nbrElem;
    printf("Entrer le nombre d'elements: ");
    scanf("%d",&nbrElem);
    int table[nbrElem];
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("Entrer l'element %d: ", i+1);
        scanf("%d",&table[i]);
    }
     for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
      for (int j = i+1; j < sizeof(table)/sizeof(table[0]); j++) {
        if (table[i] > table[j]) {
            int temp = table[j];
            table[j] = table[i];
            table[i] = temp;
        }
      }
    }
    for (int i = 0; i < sizeof(table)/sizeof(table[0]);i++) {
        printf("%d",table[i]);
        if (i !=  sizeof(table)/sizeof(table[0]) - 1) {
            printf(", ");
        }
    }
}