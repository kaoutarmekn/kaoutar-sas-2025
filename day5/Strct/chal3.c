#include <stdio.h>

struct rectangle {
    float langeur;
    float largeur;
};
int calc(float lang, float larg){
   printf("%.2f",larg * lang);
}
int main() {
    struct rectangle rectangle1 = {12,15};
  calc(rectangle1.langeur,rectangle1.largeur);
}