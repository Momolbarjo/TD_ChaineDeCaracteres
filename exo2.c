#include <stdio.h>
#include <stdbool.h>
#define SIZE 1000


int getStringSize(const char* str){
 int i=0;

while (str[i] != '\0')
{
i = i + 1;

}
return (i);
}

bool areSringEqual (chaine1,chaine2){

if (chaine1==chaine2) {

    return(true);
}
else {

    return(false);
}

}

void main () {

char chaine1[SIZE];
char chaine2[SIZE];

printf("Ecris ce que tu veux\n");
scanf("%s",&chaine1);

 printf("il y a %d caracteres dans la chaine\n", getStringSize(chaine1));

 printf("Reecris ce que tu veux\n");
scanf("%s",&chaine2);

if (areSringEqual(chaine1,chaine2)==true){

    printf("Les chaines sont les memes");
}

else if (areSringEqual(chaine1,chaine2)==false)  {

    printf("Les chaines  ne sont pas les memes");
}

}
