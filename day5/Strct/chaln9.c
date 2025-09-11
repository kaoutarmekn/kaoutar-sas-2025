#include <stdio.h>
#include <string.h>
struct bank {
    char nom[30];
    float sold;
}bank1;
int ajout(float num) {
    bank1.sold = bank1.sold + num;
}
int main() {
    float add = 23.5;
   strcpy(bank1.nom,"Hammaoui");
   bank1.sold = 230;
    printf("%s tu ajout %.2f, votre sold maintenant est: %.2fDH",bank1.nom, add,bank1.sold);
}