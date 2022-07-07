#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct complex
{
        double re,im;
}*z;
double norma(struct complex c)
{
    return sqrt(c.re*c.re + c.im*c.im);
}
int n,i,j;
double *modul,min,max;
int main()
{
    scanf("%d", &n);
    if(n<=0)
        printf("imposibil");
    else
    {
        z=(struct complex*)(malloc(n*sizeof(struct complex)));//alocam n spatii de memorie de dimensiunea structurii complex pentru z
        modul=(double*)(malloc(n*sizeof(double)));//alocam n spatii de memorie de dimensiunea double pentru modul
        for(i=0;i<n;i++)
        {
            scanf("%lf", &z[i].re);
            scanf("%lf", &z[i].im);
            modul[i]=norma(z[i]);//calculam norma numarului imediat cum citim parametrii numarului complex
        }
        max=*modul;//initializam max cu ultimul numar la care am facut modulul
        min=*modul;//initializam min cu ultimul numar la care am facut modulul
        for(i=1;i<n;i++)
        {
            if(modul[i]>max)//cautam si reatribuim lui max cel mai mare modul gasit
                max=*(modul+i);// *(modul+i) <=> modul[i]
            if(modul[i]<min)//cautam si reatribuim lui min cel mai mic modul gasit
                min=modul[i];// modul[i] <=> *(modul+i)
        }
        printf("%.4lf",max-min);
        free(z);
        free(modul);
    }
    return 0;
}
