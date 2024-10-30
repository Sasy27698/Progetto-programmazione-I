#include "header.h"
//richiamo la function movimento della schacchiera con quattro possibili movimenti randomici
void movimento (char scacchiera [30] [30],int *x,int *y) {
int n, q=0;
scacchiera [*y] [*x]='.';
while (q==0) {
    n=rand()%4;
    if (n==0 && (*y)!=0) {
        (*y)--;
        q=1;
    }
    else if (n==1 && (*x)!=29) {
        (*x)++;
        q=1;
    }
    else if (n==2 && (*y)!=29) {
        (*y)++;
        q=1;
    }
    else if (n==3 && (*x)!=0) {
        (*x)--;
        q=1;
    }
}
}
