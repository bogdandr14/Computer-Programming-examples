#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *s,*p;
    int c=1,i=0;
    s=(int*)(calloc(31,sizeof(int)));//alocam lui s 31 de spatii de memorie de tip int si dimensiune int si le initializam cu 0
    p=(int*)(calloc(31,sizeof(int)));
    scanf("%s %s",s,p);//cand punem spatiu dupa %s compilatorul considera ca mai avem de introdus valori
    for(i=0;i<strlen(s) || i<strlen(p);i++)
        if(*(s+i)!=*(p+i))//comparam literele de pe aceeasi pozitie in cele 2 cuvinte
            c=0;
    if(c)//conditie afirmativa cat timp c!=0
        printf("identice");
    else
        printf("diferite");
    free(s);//eliberam spatiul alocat lui s
    free(p);
    return 0;
}
