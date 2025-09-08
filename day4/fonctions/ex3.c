#include <stdio.h>

int maximum(int a, int b){

    int max = a;
    if(b > max){
        max = b ;
    }
    return max ;
}
int main(){
     int a , b, resultat;
     printf("entrez le premier nombre >>");
     scanf("%d" ,&a);

     printf("entrez le deuxieme nombre >>");
     scanf("%d" ,&b);

     resultat = maximum(a ,b);
     printf(" le max >>> %d" ,resultat);
     return 0;
}