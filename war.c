#include <stdio.h>
#include <stdlib.h>
//---Struct Territorio
//--- Armazena informações básicas:
//--- cor: cor do exército (sem espaços)
//---tropas: quantidade de tropas

//--- Estrutura de dados ---
struct Territorio {
    char nome [30];
    char cor[10]; 
    int tropas ; 
};

int main(){
    struct Territorio Territorios [5];
    int i;

    printf ("=== Cadastro de territórios ===\n\n");

// Entrada dos 5 Territórios 
    for (i = 0; i < 5; i++);{          
        printf ("--- Território %d ---\n", i + 1);

        printf ("Digite o nome do território (sem espaços): ");
        scanf ("%29s", Territorios[i].nome);

        printf ("Digite a cor do exécito de tropas: ");
        scanf ("%9s", &Territorios[i].cor);

        printf ("Digite a quantidade de tropas: ");
        scanf ("%d", &Territorios[i].tropas);

        printf ("\n");

    }
// Exibição dos dados cadastrais 
printf("\n === Dados dos Territórios Cadasrados === \n"); 

for (i = 0; i < 5; i++ ) {
    printf ("\nTerritorio %d:\n", i + 1 );
    printf ("Nome: %s\n", Territorios[i].nome);
    printf ("Cor do exercito: %s\n" , Territorios[i].cor);
    printf ("Tropas: %d\n ", Territorios[1].tropas);
    }

}