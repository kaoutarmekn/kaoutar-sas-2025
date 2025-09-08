#include <stdio.h>

 int main(){

    int T[] = { 2 , 3 , 7 , 9 , 9 }; 
    printf("\n Initialisation et Affichage :\n\n");
     
    for( int i = 0 ; i < 5 ; i ++){

        printf("T[%d] , %d\n" , i, T[i]);
    }
    return 0; 
 }