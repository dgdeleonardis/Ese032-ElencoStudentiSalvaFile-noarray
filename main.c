#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define MAX_STRLEN 30
#define N 3
// Definisci il tipo di dato struct s_studente
struct s_studente {
    char nome[MAX_STRLEN+1];
    char cognome[MAX_STRLEN+1];
    int eta;
    char classe[MAX_STRLEN+1];
};
// Definisci studente come struct s_studente
struct s_studente studente;

int main(int argc, char** argv) {
    // Dichiara le variabili locali
    int i;
    
    FILE *puntaFile;
    puntaFile = fopen("elenco.dat", "wb");
    
    if(puntaFile != NULL) {
        for(i = 0; i < N; i++) {
            printf("Nome elemento %d : ");
            scanf("%s", studente.nome);
            printf("Congome elemento %d : ");
            scanf("%s", studente.cognome);
            printf("Eta' elemento %d : ");
            scanf("%d", &(studente.eta));
            printf("Classe elemento %d : ");
            scanf("%s", studente.classe);
            fwrite(&studente, sizeof(studente), 1, puntaFile);
        }
        
        fclose(puntaFile);
    }
    
    else {
        printf("Il file non puo' essere aperto\n");
    }
    
    return (EXIT_SUCCESS);
}
