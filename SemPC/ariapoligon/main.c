#include <stdio.h>
#include <stdlib.h>
struct coordonate
{
    float x,y;
}o,a,b;
int main()
{
    int i,n;
    float aria=0,ariapart;
    scanf("%d",&n);
    scanf("%f%f%f%f",&o.x,&o.y,&a.x,&a.y);
    for(i=3;i<=n;i++)
    {
        scanf("%f%f",&b.x,& b.y);
        ariapart=(a.x*b.y+o.x*a.y+b.x*o.y-o.x*b.y-a.x*o.y-b.x*a.y)/2;
        if(ariapart<0)
            ariapart=ariapart*(-1);
        aria=aria+ariapart;
        a.x=b.x;
        a.y=b.y;
    }
    printf("%f",aria);
    return 0;
}
