#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef enum palo        //dichiaro una typedef per dichiarare i quattro pali
{
    denari,
    coppe,
    spade,
    bastoni,
} Palo;

typedef struct card {       //dichiaro una typedef e una struct per la carta e il suo valore
float valore;
Palo palo;
} carta;

typedef struct player       //dichiaro un typedef e struct per i nomi,cognomi e rispettivi punteggi dei giocatori
{
    char nome[100];
    char cognome[100];
    int   punteggio;
}giocatore;

void mischia (carta mazzo []);             //dichiaro varie function
void scambia (carta a, carta b);
void gioca (carta mazzo[], giocatore Giocatore[]);
void stampa (carta a);


#endif // HEADER_H_INCLUDED
