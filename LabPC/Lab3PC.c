#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int r,x,y,u,w,m;
float p,A,a,b,c;
int main()
{
    scanf("%f%f%f", &a,&b,&c); //citim laturile unui triunghi pentru a afla ce tip de triunghi este
    if(a<b+c && b<a+c && c<a+b)
    {
        if(a==b && b==c)
            printf("Echilateral");
        else
            if(a==b || b==c || a==c)
                printf("Isoscel");
            else
                printf("Oarecare");
        if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
            printf(" Dreptunghic");
        p=(a+b+c)/2;
        A=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("\nAria triunghiului este:%f\n",A);
    }
    else
        printf("Numerele nu reprezinta laturile unui triunghi\n");
    scanf("%d%d", &x, &y);//facem cmmdc si cmmmc a 2 numere naturale
    u=x;
    w=y;
    while(x!=0)
    {
        r=y%x;
        y=x;
        x=r;
    }
    m=u*w/y;
    printf("cmmdc este %d\ncmmmc este %d\n",y,m);
    scanf("%d%d", &x, &y);//afisam cadranul in care se afla un punct de coordonate date
    if(x==0 && y==0)
        printf("Punctul de origine\n");
    else
    {
        if(x>0)
            if(y>=0)
                printf("Cadranul 1\n");
            else
                printf("Cadranul 4\n");
        else
            if(y<=0)
                printf("Cadranul 3\n");
            else
                printf("Cadranul 2\n");
    }
    scanf("%d",&m);//citim un numar natural m
    x=0;
    for(y=1;y<=m;y++)
        x+=y;
    printf("Suma primelor %d numere naturale este %d\n", m, x);
    scanf("%d",&m);//citim un numar pentru a afla daca este prim
    x=1;
    for(y=2;y*y<=m;y++)
        if(m%y==0)
        {
            x=0;
            break;
        }
    if(x)
        printf("Numarul %d este prim", m);
    else
        printf("Numarul %d nu este prim", m);
    return 0;
}
