#include <stdio.h>
#include <string.h>
#define SIZE 150

int areSringEqual(char chaine1[],char chaine2[]){

    int egal=1;

int longueur1=strlen(chaine1);
int longueur2=strlen(chaine2);

if (longueur1 != longueur2){

    egal=2;

}


 if (longueur1 == longueur2){


    for(int i=0;i<longueur1;i++){

        if(chaine1[i] != chaine2[i]){


        egal=0;


        }

        else if(chaine1[i] == chaine2[i]){


        egal=1;

        }

 }
 }




return egal;
}



void main () {

char chaine1[SIZE],chaine2[SIZE];


printf("Entrez 2 chaines de caracteres: ");
scanf("%s",chaine1);
scanf("%s",chaine2);


int egal=areSringEqual(chaine1,chaine2);

if(egal==0){

printf("Les chaines sont differentes");

}

else if(egal==1)  {

printf("Les chaines sont les memes");

}
else if(egal==2)  {

printf(" T con ou quoi , c meme pas la meme taille");

}


}

