#include <stdio.h>
#define SIZE 1000


int getStringSize(const char* str){
 int i=0;

while (str[i] != '\0')
{
i = i + 1;

}
return (i);
}


void main () {

char chaine[SIZE];

printf("Ecris ce que tu veux\n");
scanf("%s",&chaine);

 printf("il y a %d caracteres dans la chaine\n", getStringSize(chaine));

}
