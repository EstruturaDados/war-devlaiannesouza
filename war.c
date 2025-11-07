#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

//--- Constantes globais ---
#define NUM_TERRITORIO 5
#define TAM_NOME 50
#define NUM_MISSOES 3

//--- Estrutura de dados ---
typedef struct {
char nome [TAM_NOME];
    char corExercito [TAM_NOME]; 
    int tropas ; 
}Territorio;

//---