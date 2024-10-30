#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

/*main che indica i giocatori con i rispettivi nomi,cognomi e punteggi e
 il mazzo,dichiaro due printf per inserire i nomi,cognomi dei rispettivi giocatori uno e due e li prende tramite gets,
 apro due cicli for uno per il mazzo (i) e uno per i pali (j)*/

int main()
{
 int i,j,t=0;
 carta mazzo[40];
 giocatore Giocatore[2];
for (i=0; i<2; i++) {
    printf("Inserire nome giocatore %d", i+1);
    putchar(' ');
    fflush(stdin);
    gets(Giocatore[i].nome);
    printf("Inserire cognome giocatore %d", i+1);
    putchar(' ');
    fflush(stdin);
    gets(Giocatore[i].cognome);
    Giocatore[i].punteggio=0;
}
 for (i=1;i<11;i++) {
    for (j=0; j<4;j++) {
        mazzo[t].valore=i;
        mazzo[t].palo=j;
        t++;
    }
 }
    mischia(mazzo);        //richiamo la funzione mischia, e uso die printf per i punteggi
    gioca(mazzo, Giocatore);
    printf("Punteggio %s %s:\t %d\n",Giocatore[0].nome, Giocatore[0].cognome ,Giocatore[0].punteggio);
     printf("Punteggio %s %s:\t %d\n",Giocatore[1].nome, Giocatore[1].cognome ,Giocatore[1].punteggio);
}
