#include <stdio.h>
typedef int Tab[10]; 

void recopieTableau(Tab tab1, Tab tab2)
{
for (int i = 0; i < 10; i++)
{
    if (tab1[i] > 0)
    {
        tab2[i] = tab1[i];
    }
}
}

void affichage (Tab tab)
{
for (int i = 0; i < 10; i++)
{
    printf("valeur tab 1: %d \n", tab[i]);
}
}

void zero(Tab tab2)
{
for (int i = 0; i < 10; i++)
{
    if (tab2[i] < 0)
    {
        tab2[i] = 0;
    }
}
}

int main(void)
{
Tab tab1[]= {12,-8,254,11,5744,3,};
Tab tab2[]= {0};

recopieTableau(tab1,tab2);
afficher(tab1);
zero(tab2);

return 0; 