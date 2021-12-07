#include <stdio.h>
#include <stdbool.h>

/***************************Exercice n°1******************************/
int mesvaleurs[4];
float tabnotes[30];
int nbNotes=0;
bool permut=false;
/*****************prototypes*************************/
void saisie();
void affichage();
void saisieMoyenne();
void moyenne();
bool passagedec(int taille);
bool passagecroi(int taille);
void menu();
void permutation(int i);
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

bool passagedec(int taille)
{
    permut=false;
    int buffer=0;
    for(int i=0;i<taille-1;i++)
    {
        if(mesvaleurs[i]<mesvaleurs[i+1]) //je teste si la case est suivante est plus grande
        {
            permutation(i);
        }
    }
    return permut;
}

bool passagecroi(int taille)
{
    permut=false;

    for(int i=0;i<taille-1;i++)
    {

        if(mesvaleurs[i]>mesvaleurs[i+1]) //je teste si la case est suivante est plus grande
        {
          permutation(i);

        }
    }
    return permut;
}

void permutation(int i)
{
    int buffer=0;
    buffer=mesvaleurs[i];
    mesvaleurs[i]=mesvaleurs[i+1];
    mesvaleurs[i+1]=buffer;
    permut=true;
}
void menu()
{
    int taille=4;
    int choix=0;
    printf("1-Affichage croissant\n");
    printf("2-Affichage décroissant\n");
    scanf("%d",&choix);
    switch (choix) {
        case 1:
            while (passagecroi(taille))
            {
                taille--;
            }
            break;
        case 2:
            while (passagedec(taille))
            {
                taille--;
            }
            break;

    }
}

int main() {

   /******************Exercice n°1********************************/
    saisie();
    menu();
    affichage();
   /*****************Exercice n°2*********************************/
    //saisieMoyenne();

   return 0;
}
