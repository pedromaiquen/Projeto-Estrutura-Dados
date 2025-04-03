#ifndef PROCESSO_H
#define PROCESSO_H

#define MAX_ASSUNTOS 10 // Definir um número máximo de assuntos por processo
#define MAX_STRING 100

typedef struct {
    int id;
    char classe[MAX_STRING];
    char data_ajuizamento[MAX_STRING]; 
    char orgao[MAX_STRING];
    int id_classe;
    int id_assuntos[MAX_ASSUNTOS]; // Vetor para armazenar múltiplos assuntos
    int qtd_assuntos; // Quantidade real de assuntos armazenados
} Processo;

#endif
