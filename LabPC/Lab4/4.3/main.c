#include <stdio.h>
#include <stdlib.h>
float fract, eps, suma,x;
int main()
{
    scanf("%f%f", &x, &eps);
    if(x<=1 || eps<=0 || eps>=1)
        printf("imposibil");
    else
    {
        suma=0;
        fract=1/x;  //primul numar al sumei
        while(fract>=eps)
        {
            suma+=fract;
            fract/=x;   //urmatorul numar al sumei
        }
        printf("rezultatul este: %.2f", suma);
    }
    return 0;
}
