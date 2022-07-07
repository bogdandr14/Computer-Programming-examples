#include <stdio.h>
#include <stdlib.h>
int i, j, n, counter_line, counter_col, sum, sumsec, v[10][10];
int main()
{
    scanf("%d", &n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d", &v[i][j]);
            if(i==j)
                sum+=v[i][j];
            if(i+j==n-1)
                sumsec+=v[i][j];
        }
    if(sum!=sumsec)
    {
        printf("Nu este patrat magic");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        counter_line=0;
        counter_col=0;
        for(j=0;j<n;j++)
        {
            counter_line+=v[i][j];
            counter_col+=v[j][i];
        }
        if(counter_line!=sum || counter_col!=sum)
        {
            printf("Nu e patrat magic");
            return 0;
        }
    }
    printf("Este patrat magic");
    return 0;
}
