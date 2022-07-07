#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,n;
    char *s;
    scanf("%d", &n);
    s=(char*)(calloc(n,sizeof(char)));
    for(i=0;i<n;i++)
    {
        scanf("%d", &s[i]);
        s[i]=s[i]-'#'-i; //scadem din valoarea de pe pozitia i valoarea lui # din codul ascii si valoarea lui i
    }
    s[n-1]=s[n-1]+'#'-'?';//la ultimul element in loc de # scadem ?
    for(i=0;i<n;i++)
        printf("%c", s[i]);
    free(s);
    return 0;
}
