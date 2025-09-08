#include  <stdio.h>

int produit( int a, int b){
    return a * b ;
}
int main(){

    int a, b, resultat;
    printf("entrez le premier nombre >>");
    scanf("%d" ,&a); 

    printf("entrez le deuxieme nombre >>");
    scanf("%d" ,&b);

    resultat = produit(a,b);
    printf("Le resultat >>> %d",resultat);


return 0; 
}