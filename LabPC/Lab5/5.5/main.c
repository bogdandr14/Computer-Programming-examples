#include <stdio.h>
#include <stdlib.h>
char s[101],c;
int i,nr;
int main()
{
    scanf("%s ", &s);
    scanf("%c", &c);
    for(i=0;i<strlen(s);i++)//strlen e o functie care returneaza lungimea sirului
        if(s[i]==c)//comparam caracterul de pe pozitia i cu c
            nr++;
    if(nr)//orice conditie e adevarata daca are o valoare nenula, aici e adevarata daca nr!=0
        printf("caracterul '%c' apare de %d ori in cuvantul '%s'", c, nr, s);
    else
        printf("caracterul '%c' nu apare in cuvantul '%s'", c, s);
    return 0;
}
