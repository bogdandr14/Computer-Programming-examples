#include <stdio.h>
#include <stdlib.h>
///Sa se scrie un program care realizeaza o analiza a notelor obtinute de studentii unei clase.
/*int main()
{
    float S;
    int n,v[11]={0},nota,i,j,avgnota=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&nota);
        v[nota]++;
        if(v[nota]>avgnota)
            avgnota=v[nota];
        S+=nota;
    }
    printf("media notelor este: %f\n",S/i);
    printf("^");
    for(i=avgnota;i>0;i--)
    {
        printf("\n|");
        for(j=0;j<=10;j++)
            if(v[j]>=i)
                printf("X ");
            else
                printf("  ");
    }
    printf("\n|---------------------->\n 0 1 2 3 4 5 6 7 8 9 10");
    return 0;
}*/
///Scrieti un program care simuleaza aruncarea unui zar de 60 milioane de ori si contorizeaza rezultatul intr-un tablou.
/*#include<time.h>
int main()
{
    int throws[6]={0};
    int random_num=-1;
    size_t i;
    srand(time(0));
    clock_t begin=clock;
    for(i=0;i<60000000;i++){
        random_num=rand()%6;
        throws[random_num]++;
    }
    clock_t end = clock();
    printf("The loop run for %f seconds\n",(double)end-begin/CLOCKS_PER_SEC);
    for(i=0;i<6;i++)
        printf("Dice #%d was thrown %d times\n",i+1,throws[i]);
    return 0;
}
*/
