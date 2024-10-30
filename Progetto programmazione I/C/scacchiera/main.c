#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "header.h"
/*Nel main inserisco un random per i movimenti randomici delle pedine,
 posiziono le pedine x in alto a sinistra e y in basso a destra, apro due cicli for
 ed infine apro una printf per contare i passi*/

int main()
{
    srand((long)time(NULL));
    char scacchiera[30] [30];
    int q=0,x1=0, y1=0, x2=29, y2=29,i, j;
    for(i=0;i<30;i++) {
        for (j=0;j<30;j++)
        scacchiera [i] [j]='.';
    }
    scacchiera [0] [0]='x';
    scacchiera [29] [29]='y';
    while (q<100 && (x1!=x2 || y1!=y2)){
    movimento(scacchiera,&x1, &y1);
    movimento(scacchiera,&x2, &y2);
    scacchiera[y1] [x1]='x';
    scacchiera[y2] [x2]='y';
    for (i=0;i<30;i++) {
        for (j=0;j<30;j++)
            putchar(scacchiera[i] [j]);
            printf("\n");
    }
    q++;
    system("pause");
}
    printf("Passi effettuati: %d", q);
}
