#include <stdio.h>
#include <stdlib.h>
char s[101];
int i,vocale,consoane;
int main()
{
    scanf("%s", &s);
    for(i=0;i<strlen(s);i++)// strlen e o functie care returneaza lungimea unui sir
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            vocale++;
        else
            consoane++;
    printf("cuvantul '%s' contine %d vocale si %d consoane", s, vocale, consoane);
    return 0;
}
