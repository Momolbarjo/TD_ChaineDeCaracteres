#include <stdio.h>
#include <string.h>
#define SIZE 15

char toUpper (char c) {

printf("Entrez une lettre miniscule:");
scanf("%s",&c);
         c = c -32;

    return(c);
}

char toLower (char c) {


printf("\nEntrez une lettre majuscule:");
scanf("%s",&c);
         c = c +32;


    return(c);
}

char changeLetter (char c){

printf("\nEntrez un caractere: ");
scanf("%s",&c);

 if (c-90<=0) {

    c = c +32;
    return(c);

}

 if (c-90>0) {

    c = c -32;

    return(c);

}
else {

    c=c;
return(c);

}

}


void main () {

    char minuscule;
    char majuscule;
    char lettre;
    char prenom[SIZE];

    printf("Votre lettre en majuscule est : %c\n", toUpper(minuscule));
    printf("Votre  lettre  en miniscule est : %c\n",toLower(majuscule));
    printf("L'equivalent de votre caractere est : %c\n",changeLetter(lettre));

    printf("\nEntrez un prenom:");
    scanf("%s",&prenom);

if (prenom[0]-90>0){

    prenom[0]=prenom[0]-32;

}


for (int i=1;prenom[i]!='\0';i++){

    if(prenom[i]-90<=0){
         prenom[i]=prenom[i]+32;
    }
    else{

        prenom[i]=prenom[i];
    }
}
printf("\nLe prenom est %s",prenom);

}
