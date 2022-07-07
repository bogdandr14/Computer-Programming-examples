#include<stdlib.h>
#include<time.h>

int throw_dices()
{
    int face1 = 1 + rand() % 6;
    int face2 = 1 + rand() % 6;
    printf("you threw %d and %d \n", face1, face2);
    return face1 + face2;
}
int main()
{
    srand(time(0));
    int winner = -1;
    int round = 0;
    int point, count;
    while (winner==-1)
    {
        printf("In round %d ", round);
        count = throw_dices();
        if (round == 0)
        {
            if (count == 7 || count == 11)
            {
                winner = 1;
                break;
            }
            if (count == 2 || count == 3 || count == 12)
            {
                winner = 0;
                break;
            }
            point = count;
        }
        else
        {
            if (count == 7)
            {
                winner = 0;
                break;
            }
            if (count == point)
            {
                winner = 1;
                break;
            }
        }
        round++;
    }
    if(winner)
        printf("you won");
    else
        printf("you lost");
    return 0;
}
