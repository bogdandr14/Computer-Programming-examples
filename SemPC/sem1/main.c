#include <stdio.h>
#include <stdlib.h>
//Sa se scrie un program care sa determine rangul si dimensiunea tipurilor de date
/*int main()
{
    int i,k=1;
    long long p;
    for(i=1;i<=8;i++)
        k=k*2;
    p=(long long)k;
    for(i=1;i<sizeof(short);i++)
        p*=k;
    printf("short: %d octeti si valori [%d,%d]\n",sizeof(short), p,p-1);
    p=k;
    for(i=1;i<sizeof(unsigned short);i++)
        p*=k;
    printf("unsigned short: %d octeti si valori [%d,%d]\n",sizeof(unsigned short), 0,(p*2)-1);
    p=k;
    for(i=1;i<sizeof(char);i++)
        p*=k;
    printf("char: %d octeti si valori [%d,%d]\n",sizeof(char), p,p-1);
    p=k;
    for(i=1;i<sizeof(unsigned char);i++)
        p*=k;
    printf("unsigned char: %d octeti si valori [%d,%d]\n",sizeof(unsigned char), 0,(p*2)-1);
    p=k;
    for(i=1;i<sizeof(short int);i++)
        p*=k;
    printf("short int: %d octeti si valori [-%d,%d]\n",sizeof(short int), p,p-1);
     for(i=1;i<sizeof(unsigned short int);i++)
        p*=k;
    printf("unsigned short int: %d octeti si valori [%d,%d]\n",sizeof(unsigned short int), 0,(p*2)-1);
    p=k;
    for(i=1;i<sizeof(int);i++)
        p*=k;
    printf("int: %d octeti si valori [-%d,%d]\n",sizeof(int), p,p-1);
    p=k;
    for(i=1;i<sizeof(unsigned int);i++)
        p*=k;
    printf("unsigned int: %d octeti si valori [%d,%d]\n",sizeof(unsigned int), 0,(p*2)-1);
    p=k;
    for(i=1;i<sizeof(long);i++)
        p*=k;
    printf("long: %d octeti si valori [-%d,%d]\n",sizeof(long), p,p-1);
    p=k;
    for(i=1;i<sizeof(unsigned long);i++)
        p*=k;
    printf("unsigned long: %d octeti si valori [%d,%d]\n",sizeof(unsigned long), 0,p-1);
    p=k;
    for(i=1;i<sizeof(float);i++)
        p*=k;
    printf("float: %d octeti si valori [-%d,%d]\n",sizeof(float), p,p-1);
    p=k;
    for(i=1;i<sizeof(double);i++)
        p*=k;
    printf("double: %d octeti si valori [-%d,%d]\n",sizeof(double), p,p-1);
    return 0;
}
*/
//sa se scrie un program care sa converteasca un sir de caractere continand zecimale in numar intreg echivalent
/*int main()
{
    char s[10];
    int v=0,i;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
        v=v*10+(s[i]-48);
    printf("%d", v);
    return 0;
}*/
//sa se scrie un program care calculeaza suma S=1+1/2+1/3+... cu precizia eps data
/*int main()
{
    int i;
    float eps,S=0;
    scanf("%f",&eps);
    for(i=1;1.0/(float)i>=eps;i++)
        S=S+(1.0/(float)i);
    printf("%f",S);
    return 0;
}
*/