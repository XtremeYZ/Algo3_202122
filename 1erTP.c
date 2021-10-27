#include <stdio.h>
#define N 15

    typedef char chaine [15];
    typedef struct tp1
        {
            chaine nom[15];
            int idDuClient;
        }
    client;

    typedef client tab[N];
    void saisie(client * c)
    {
        printf ("inserer client ");
        scanf("%s", (*c).nom);
        printf("inserer id client ");
        scanf("%d", (*c).idDuClient);
        printf("nom client : %s | id client : %d", c->nom, c->idDuClient);

    }
    
    int main (int argc, char **argv)
    {
        client iencli;
        saisie(&iencli);
        return 0;
    }