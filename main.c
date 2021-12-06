#include <stdio.h>
int mesvaleurs[10];
/*****************prototypes*************************/
void saisie();
void affichage();
/*****************implementations********************/
void saisie() {
    for(int i=0;i<10;i++)
    {
        printf("Veuillez saisir un nombre\n");
        scanf("%d",&mesvaleurs[i]);
    }
}

void affichage() {
    for(int i=0;i<10;i++)
    {
        printf("%d=>%d\n",i,mesvaleurs[i]);
    }
}

int main() {
   saisie();
   affichage();
   return 0;
}
