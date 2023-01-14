#include <stdio.h>
#include <string.h>
#define SIZE 150

int getStringSize(char chaine1[]){

 int  size=0;

while(chaine1[size]!= '\0'){

    size++;
}
return(size);
}





int areSringEqual(char chaine1[],char chaine2[]){

    int egal=1;
    int i=0;

int longueur1=getStringSize(chaine1);
int longueur2=getStringSize(chaine2);

if (longueur1 != longueur2){

    egal=2;
    return egal;

}


 if (longueur1 == longueur2){


     while (chaine1[i] != '\0'){

        if(chaine1[i] != chaine2[i]){


        egal=0;
        return egal;


        }
    i++;

  }
 }


egal=1;

return egal;
}

int concatStrings( char chaine1[],char chaine2[]){

int longueur1=getStringSize(chaine1);

int i=0;

  for(i=0;chaine2[i]!='\0';i++)
 {
  chaine1[longueur1+i] = chaine2[i];
 }
 chaine1[longueur1+i]='\0';

return chaine1;
}



void main () {

char chaine1[SIZE],chaine2[SIZE],chaine3[SIZE];


printf("Entrez 2 chaines de caracteres: ");
scanf("%s",chaine1);
scanf("%s",chaine2);



int egal=areSringEqual(chaine1,chaine2);

if(egal==0){

printf("Les chaines sont differentes\n");

}

else if(egal==1)  {

printf("Les chaines sont les memes\n");

}
else if(egal==2)  {

printf(" T con ou quoi , c meme pas la meme taille\n");

}
printf("%s",concatStrings(chaine1,chaine2));
}
