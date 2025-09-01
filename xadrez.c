#include <stdio.h>

int main (){

    int i, j, k;

    //movimento torre (5 casas para direita)
    i = 1;

    while (i <= 5) {
        printf ("Torre para direita\n");
        i++;
    }
    

    //movimento bispo (5 casas cima direita)
    j = 1;
    do
    {
            printf("Bispo para cima, direita\n");
            j++;
    }  while (j <= 5);
        

    //movimento rainha (8 casas esquerda)
    for (k = 1; k <= 8; k++){
        
        printf ("Rainha para esquerda\n");
    }




    return 0;
}
