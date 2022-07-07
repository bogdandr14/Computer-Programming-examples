#include <stdio.h>
#include <stdlib.h>
int main()
{
    char aux,s[80];
    int i,marimecuv=0;
    gets(s);
    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]==' ' || s[i]==NULL)//cautam caracterul spatiu sau am ajuns la finalul sirului
        {
            aux=s[i-1];//interschimbam ultimul caracter cu primul din cuvant
            s[i-1]=s[i-marimecuv];
            s[i-marimecuv]=aux;
            marimecuv=0;//reinitializam lungimea cuvantului
        }
        else
            marimecuv++;//incrementam lungimea cuvantului
    }
    printf("%s", s);
    return 0;
}
