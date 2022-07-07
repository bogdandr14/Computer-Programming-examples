#include <stdio.h>
#include <stdlib.h>
///sa se scrie un program care sa converteasca o nota din sistemul Ro intr-o nota in sistemul US.
/*int main()
{
    int n;
    scanf("%d", &n);
    if(n==10)
        printf("A sau A+");
    if(n==9)
        printf("A- sau B+");
    if(n==8)
        printf("B");
    if(n==7)
        printf("B- sau C+");
    if(n==6)
        printf("C");
    if(n==5)
        printf("C-");
    if(n<=4)
        printf("F");
    return 0;
}
*/
///sa se scrie un program in C care calculeaza radacina patratica a unui numar natural dat. Nu se vor folosi functiile librariei matematice.
/*int main()
{
    float n,u,p=1;
    scanf("%f", &n);
    u=n;
    while(u!=p)
    {
        p=u;
        u=(u+n/u)/2;
    }
    printf("%f",u);
}
*/
///sa se determine valoarea expresiei e=1/0!+1/1!+1/2!+... cu o anumita precizie data.
/*int main()
{
    float e,eps,i,factorial=1.0;
    scanf("%f",&eps);
    for(i=1;factorial/i>eps;i++)
    {
        if(i==1)
            e=1;
        factorial/=i;
        e=e+factorial;
    }
    printf("%f",e);
    return 0;
}
*/
///Sa se determine cu o precizie data valoarea expresiei e=x-x^3/3!+x^5/5!-x^7/7!+...
/*int factorial(int n)
{
    int f=1,i;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}
int main()
{
    float numar=1,x,e=0,eps;
    int i;
    scanf("%f%f",&x,&eps);
    numar=x;
    for(i=0;numar/factorial(i*2+1)<=eps;i++)
    {
        if(i%2==0)
            e=e+numar/factorial(i*2+1);
        else
            e=e-numar/factorial(i*2+1);
        numar=numar*x*x;
    }
    printf("%f",e);
    return 0;
}*/
///Scrieti un program carecalculeaza ratele lunare pentru un credit bancar.
///Se dau de la tastatura: valoarea creditului, dobanda anuala perceputa asupra creditului, valoarea ratei lunare.
///Se va afisa la iesire: numarul de luni in care creditul se stinge si in fiecare luna cati bani au mai ramas de paltit.
/*int main()
{
    float val_credit,dobanda,rata;
    int nrluni=0;
    scanf("%f%f%f",&val_credit,&dobanda,&rata);
    dobanda/=1200;
    while(val_credit>0)
    {
        nrluni++;
        val_credit=val_credit*(1+dobanda)-rata;
        if(val_credit>0)
            printf("Dupa luna %d mai avem de platit: %f\n",nrluni,val_credit);
    }
    printf("Se va termina de achitat dupa %d luni",nrluni-1);
    return 0;
}*/
