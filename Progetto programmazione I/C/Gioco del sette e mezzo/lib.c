#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"

void mischia (carta mazzo []) {     //dichiaro una function che mischia le carte
srand(time(NULL));
int i,n,a,b,j;
printf("Quante volte si vuole mischiare?\n");
scanf("%d",&n);
for (j=0; j<n; j++) {
a=rand()%40;
b=rand()%40;
    scambia(mazzo[a],mazzo[b]);
}
}

void scambia (carta a, carta b) {     //dichiaro una function che invece le scambia
carta c;
c.valore=a.valore;
c.palo=a.palo;
a.valore=b.valore;
a.palo=b.palo;
b.valore=c.valore;
b.palo=c.palo;
}

void gioca (carta mazzo[], giocatore Giocatore[]) {    //dichiaro una function che indica la partita

int card,i,scelta,j, partita=0,q=0;
float totale, tot[2], valore;
carta carta_uscita[8];
while (partita<=10) {
    totale=0;
    scelta=1;
    i=0;
    printf("Turno di  %s %s\n", Giocatore[q].nome, Giocatore[q].cognome);
while (totale<8 && scelta==1) {
    srand(time(NULL));
    card=rand()%40;
    carta_uscita[i].valore= mazzo[card].valore;
    valore=carta_uscita[i].valore;
    carta_uscita[i].palo=mazzo[card].palo;
    if (valore==8 || valore==9 || valore==10) {
    valore=0.5;
    }
    for (j=0;j<=i;j++)
        stampa (carta_uscita[j]);
    totale=totale+valore;
    i++;
    if (totale<8) {
    printf("Selezionare una delle seguenti scelte:\n1-Chiedere un'altra carta\n2-Passare\n");
    fflush(stdin);
    scanf("%d",&scelta);
    }
}
if (totale>=8) {
    printf("Sballato!\n");
    tot[q]=0;
    }
if (totale<8)
    tot[q]=totale;
    if (q==1) {
        if (tot[0] > tot[1]) {
            printf("Il giocatore 1 vince!\n");
            Giocatore[0].punteggio++;
        }
        else if (tot[0] < tot [1]) {
            printf("Il giocatore 2 vince!\n");
            Giocatore[1].punteggio++;
        }
        else printf("Pareggio!\n");
        partita++;
    }
    if (q==0)
        q++;
    else
        q=0;
    system("pause");
    system ("cls");
}
}

void stampa (carta a) {      //dichiaro una function che stampa uno dei 4 tipi di pali
printf("%d di ",(int)a.valore);
switch (a.palo) {
case denari: printf("Denari\n");break;
case coppe: printf("Coppe\n");break;
case spade: printf("Spade\n");break;
case bastoni: printf("Bastoni\n");break;
}
}
