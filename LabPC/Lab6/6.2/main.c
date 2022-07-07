#include <stdio.h>
#include <stdlib.h>
float f(float x)
{
    if (x < -7)
        return x*x-1;
    else
        return -x*x+2;
}

float g(float x)
{
    if (x < 5)
        return -x*x-3*x+2;
    else
        return x*x+6*x-4;
}
int main()
{
    float a,b,x,dx;
    scanf("%f %f %f", &a, &b, &dx);
    if(a>b || dx<=0)
        printf("imposibil");
    else
    {
        x=a;
        while (x <= b)//cat timp x se afla in intervalul [ab]
        {
            printf("%.5f\n", f(g(x)) );
            x+=dx;//incrementam pe x cu distanta dx
        }
    }
    return 0;
}
