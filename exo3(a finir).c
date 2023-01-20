#include <stdio.h>
#include <string.h>
#define SIZE 150

void cesar_cipher(char message[],int  shift)
{

for(int i=0;message[i] !='\0';i++)
 {


    if((message[i]+shift)>'z')
    {

        message[i]=message[i] -26 +shift;

    }

    else
    {

        message[i]=message[i]+shift;
    }
 }

printf("%s",message);
}

void cesar_decipher(char secret[], int shift)
{
for(int i=0;secret[i] !='\0';i++)
 {


    if((secret[i] - shift)<97)
    {

        secret[i]=secret[i] +26 -shift;

    }

    else
    {

        secret[i]=secret[i]-shift;
    }
 }

printf("%s",secret);



}

void vigenere_cipher( char message[], char keyword[] )
{

int i,j=0;
for( i=0;message[i] !='\0';i++,j++)
 {
     if(keyword[j]=='\0'){

	j=0;
}

     if((message[i]+keyword[j])%97 >25)
    {
     message[i]=message[i]+(keyword[j])%97-26%97;

 }

 else{

    message[i]=message[i]+(keyword[j])%97;
 }


}

printf("%s",message);

}

void main()
{

char code[SIZE],secret[SIZE],code2[SIZE],shift2[SIZE];

int shift;


/*printf("Entrez le message a coder suivi de la clef privee: \n");
scanf("%s",code);
scanf("%d",&shift);
cesar_cipher(code,shift);
printf("\nEntrez le message a decoder suivi de la clef privee: \n");
scanf("%s",secret);
scanf("%d",&shift);
cesar_decipher(secret,shift);*/

printf("\nEntrez le message a coder suivi de la clef de vigenere: \n");
scanf("%s",code2);
scanf("%s",shift2);
vigenere_cipher(code2,shift2);


}
