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

if(message[i]=='_'){

     message[i]='_';

     j=j-1;

}

if(message[i]>='A' && message[i]<='Z'){





     if((message[i]+keyword[j]-32)%65 >25)
    {
     message[i]=message[i]+(keyword[j]-32)%65-26%65;

 }

 else
 {

    message[i]=message[i]+(keyword[j]-32)%65;
 }


}

if(message[i]>='a' && message[i]<='z'){





     if((message[i]+keyword[j])%97 >25)
    {
     message[i]=message[i]+(keyword[j])%97-26%97;

 }

 else
 {

    message[i]=message[i]+(keyword[j])%97;
 }


}
 }

printf("%s",message);

}

void vigenere_decipher( char secret[], char keyword[] )
{

int i,j=0;
for( i=0;secret[i] !='\0';i++,j++)
 {

     if(keyword[j]=='\0'){

	j=0;
}
if(secret[i]=='_'){

     secret[i]='_';

     j=j-1;

}
if(secret[i]>='A' && secret[i]<='Z')
    {
if((secret[i]-keyword[j]-32)%26 <0)
    {
     secret[i]=secret[i]-(keyword[j]-32)%65;

 }

 else
 {

    secret[i]=secret[i]-(keyword[j]-32)%65+26;
 }
    }


    if(secret[i]>='a' && secret[i]<='z')
    {

     if((secret[i]-keyword[j])%26 <0)
    {
     secret[i]=secret[i]-(keyword[j])%97+26%97;

 }

 else{
         secret[i]=secret[i]-(keyword[j])%97;
 }

    }
}

printf("%s",secret);

}


void main()
{

char code[SIZE],secret[SIZE],secret2[SIZE],code2[SIZE],shift2[SIZE],shift3[SIZE];

int shift;


printf("Entrez le message a coder suivi de la clef privee: \n");
scanf("%s",code);
scanf("%d",&shift);
cesar_cipher(code,shift);
printf("\nEntrez le message a decoder suivi de la clef privee: \n");
scanf("%s",secret);
scanf("%d",&shift);
cesar_decipher(secret,shift);

printf("\nEntrez le message a coder suivi de la clef de vigenere: \n");
scanf("%s",code2);
scanf("%s",shift2);
vigenere_cipher(code2,shift2);


printf("\nEntrez le message a decoder suivi de la clef de vigenere: \n");
scanf("%s",secret2);
scanf("%s",shift3);
vigenere_decipher(secret2,shift3);
}
