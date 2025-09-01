#include <stdio.h>

int main (){

    int i, j, k, l, m;

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

    //movimento cavalo (2 casas acima, 1 casa direita)
    l = 1;
    for ( l = 1; l <= 1; l++)  {
                m = 1;
        while (m <= 2)  {
            printf ("Cavalo para cima\n");
            m++;
        }
        printf ("Cavalo para direita\n");
    }
            
        
    
    return 0;
}