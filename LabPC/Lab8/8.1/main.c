#include <stdio.h>
#include <stdlib.h>
int main()
{
    char src[100]={0},fnd[100]={0},rpl[100]={0};
    gets(src);
    gets(fnd);
    gets(rpl);
    char *aux;
    aux=(char*)(calloc((strlen(src)-strlen(fnd)+strlen(rpl)),sizeof(char)));
    int i=strstr(src,fnd)-src;//memoreaza prima pozitie la care gaseste fnd
    strncpy(aux,src,i);//copiaza in aux i pozitii din src, de la 0 la i-1
    strcat(aux,rpl);//adauga in aux pe rpl
    strcat(aux,src+strlen(fnd)+i);//adauga in aux restul de caractere aflate dupa pozitia lui fnd din src
    printf("%s", aux);
    free(aux);
    return 0;
}
