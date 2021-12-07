#include <stdio.h>
#include <stdbool.h>

/***************************Exercice n°1******************************/
int mesvaleurs[4];
float tabnotes[30];
int nbNotes=0;
/*****************prototypes*************************/
void saisie();
void affichage();
void saisieMoyenne();
void moyenne();
bool passage(int taille);
/*****************implementations********************/
void saisie() {
    for(int i=0;i<4;i++)
    {
        printf("Veuillez saisir un nombre\n");
        scanf("%d",&mesvaleurs[i]);
    }
}

void affichage() {
    for(int i=0;i<4;i++)
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

bool passage(int taille)
{
    bool permut=false;
    int buffer=0;
    for(int i=0;i<4;i++)
    {
        if(mesvaleurs[i]<mesvaleurs[i+1]) //je teste si la case est suivante est plus grande
        {
            buffer=mesvaleurs[i];
            mesvaleurs[i]=mesvaleurs[i+1];
            mesvaleurs[i+1]=buffer;
            permut=true;
        }
    }
    return permut;
}



/***********************Exercice n°2**********************************/


int main() {
    int taille=4;
   /******************Exercice n°1********************************/
   saisie();
   while(passage(taille))
   {
       taille--;
   }
   affichage();
   /*****************Exercice n°2*********************************/


   return 0;
}
