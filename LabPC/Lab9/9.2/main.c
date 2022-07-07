#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char nume[50];
    int q;
    double pret;
}produs;
produs *v;
int main(){
    int n,i,contor=0;
    double prag;
    scanf("%d ",&n);
    if(n<=0){
        printf("imposibil");
        return 0;
    }
    else
    {
        v=(produs*)malloc(n*sizeof(produs));//alocam n locatii de memorie de dimensiunea structurii produs
        for(i=0;i<n;i++)
        {
            gets(v[i].nume);//numele poate fi compus din mai multe cuvinte
            scanf("%d", &v[i].q);
            scanf("%lf ", &v[i].pret);
        }
        scanf("%lf",&prag);
        for(i=0;i<n;i++){
            if(prag<v[i].pret)//comparam pretul produsului de pe pozitia i cu valoarea prag
                contor=contor+v[i].q;//adaugam cantitatea de produse contorului
        }
        printf("%d",contor);
        free(v);
    }
    return 0;
}
