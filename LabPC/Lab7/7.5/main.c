#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char caracter,*cuvant;
int i,n;
int main()
{
    cuvant=(char*)(malloc(101*sizeof(char)));//alocam lui cuvant 101 spatii de memorie de dimensiuni char si tip char
    scanf("%s %c", cuvant, &caracter);
    for(i=0;i<=strlen(cuvant);i++)//srtlen returneaza dimensiunea unui vector/pointer de caractere
        if(*(cuvant+i)==caracter)//comparam caracterul dat cu cel din cuvant de la pozitia cuvant+i==cuvant[i]
            n++;//numarul de aparitii al caracterului
    if(n)//conditie afirmativa cat timp valoarea ei e diferita de 0 (n!=0)
        printf("caracterul '%c' apare de %d ori in cuvantul '%s'", caracter, n, cuvant);
    else
        printf("caracterul '%c' nu apare in cuvantul '%s'", caracter, cuvant);
    free(cuvant);//eliberam spatiul alocat lui cuvant
    return 0;
}
