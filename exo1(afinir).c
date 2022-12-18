#include <stdio.h>
#include <string.h>

char toUpper (char c) {


scanf("%s",&c);
         c = c -32;

    return(c);
}

char toLower (char c) {



scanf("%s",&c);
         c = c +32;


    return(c);
}

char changeLetter (char c){

scanf("%s",&c);


if((c<65) ||(c<96)  || (c>122)) {


c=c;
return(c);

}
else if (c-90<0) {

    c = c +32;
    return(c);

}

else if (c-90>=0) {

    c = c -32;

    return(c);

}




}


void main () {

char minuscule;
char majuscule;
char lettre;


    printf("Entrez une lettre miniscule:");
    printf("Votre lettre en majuscule est : %c\n", toUpper(minuscule));
    printf("\nEntrez une lettre majuscule:");
    printf("Votre  lettre  en miniscule est : %c\n",toLower(majuscule));
    printf("\nEntrez une lettre: ");
    printf("Votre caractere  est %c",changeLetter(lettre));

}
