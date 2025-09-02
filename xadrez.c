#include <stdio.h>

//recursiva torre
void torre(int i) {
    if (i == 0) return;
    printf ("Torre para direita\n");
    torre(i - 1);
         
}

//recursiva bispo
void bispo (int j) {
    if (j == 0) return;
    
    for (int i = 1; i <= 1; i++) {
        
        for (int k = 1; k <= 1; k++) {
            printf ("Bispo para direita, ");
                        
        }
        printf ("cima \n");
                
        
    }
    
    bispo (j - 1);    
    
}

//recursiva rainha
void rainha (int l) {
    if (l > 0) {
        printf ("Rainha para esquerda\n");

        rainha (l - 1);
    }
}

//recursiva cavalo
void cavalo (int m) {
    if (m == 0) return;
    
    for (int i = 1; i <= 1; i++) {
        int n = 3;
        while (n > 0) {
            if (n > 1) {
                printf ("Cavalo para cima\n");
                n--;
                continue;
            }
            n--;
            break;
                        
        }
        printf ("Cavalo para direita\n");
        
               
    }

    cavalo (m - 1);
}

//funcao menu para facilitar manutencao do codigo e loop da opcao invalida
void menu () {
    printf ("Qual peça você quer movimentar?\n");
    printf ("Escolha uma opção: \n");
    printf ("1. Torre\n");
    printf ("2. Bispo\n");
    printf ("3. Rainha\n");
    printf ("4. Cavalo\n");
}

int main (){

    int opcao;
    //quantidade de movimentos para cada peca
    int qtorre = 5, qbispo = 5, qrainha = 8, qcavalo = 1;
    
    do {
        menu ();
        scanf ("%d", &opcao);

        switch (opcao)
        {
        case 1:
            //movimento torre (5 casas para direita)
            torre (qtorre);
            break;

        case 2:
            //movimento bispo (5 casas cima direita)
            bispo (qbispo);
            break;

        case 3:
            //movimento rainha (8 casas esquerda)
            rainha (qrainha);
            break;

        case 4:
            //movimento cavalo (2 casas acima, 1 casa direita)
            cavalo(qcavalo);
            break;

        default:
            printf ("Opção inválida. Tente outra vez.\n");
        } 
             
    }
    while (opcao <1 || opcao > 4);
    //repeticao do menu para o jogador focar numa opcao valida   
    return 0;
}     