#include <stdio.h>

/***************************Exercice n°1******************************/
int mesvaleurs[10];
float tabnotes[30];
int nbNotes=0;
/*****************prototypes*************************/
void saisie();
void affichage();
void saisieMoyenne();
void moyenne();
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

void saisieMoyenne() {
    for(int i=0;i<30;i++)
    {
        printf("Veuillez saisir une note\n");
        scanf("%f",&tabnotes[i]);
        nbNotes++;
        moyenne(); //Appel moyenne
    }
}

void moyenne() {
    int somme=0;
    for (int i=0;i<nbNotes;i++)
    {
        somme+=tabnotes[i]; // pour chaque case on incrémente la somme
    }
    printf("La moyenne des notes est de %0.2f\n",somme/(float)nbNotes);
}


/***********************Exercice n°2**********************************/


int main() {
   /******************Exercice n°1********************************/
   //saisie();
   //affichage();
   /*****************Exercice n°2*********************************/
   saisieMoyenne();
   moyenne();
   return 0;
}
