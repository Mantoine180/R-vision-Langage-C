#include <stdio.h>
#include <stdlib.h>
#define TAILLE 20 /* Définit une constante */


typedef struct
{
    char marque[TAILLE];
    char modele [TAILLE];
    int prix;
} Console;

void afficheConsole (Console d)
{
    printf("%s %s (%d euros) \n ",d.marque,d.modele,d.prix);
}

int plusGrandPrix(Console * tab) {
    int i;
    int max = -1;

    for (i=0;i<=2;i++)
    {
        if (tab[i].prix > max) {
            max = tab[i].prix;
        }
    }

    return max;
}

void afficherConsoleParPrix (Console * d, int prix)
{
   int y;
   for (y=0;y<=2;y++)
   {
       if (d[y].prix==prix)
       {
           afficheConsole(d[y]);
       }
   }
}


int main()
{
    Console c1={"Nintendo","Switch",300};
    Console c2={"Microsoft","Xbox One",450};
    Console mesConsoles [TAILLE]={c1,c2,{"Sony","Playstation",370}};
    printf("%d\n", plusGrandPrix(mesConsoles));
    afficherConsoleParPrix(mesConsoles,plusGrandPrix(mesConsoles));

    return 0;
}
