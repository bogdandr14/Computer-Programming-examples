#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM_SUITS 4
#define NUM_RANKS 13
unsigned int pack[NUM_SUITS][NUM_RANKS]={0};
int generate_card(int *color,int *number)
{
    srand(time(0));
    do{
        *color = rand()%NUM_SUITS;
        *number = rand()%NUM_RANKS;
        if(pack[*color][*number]==0)
        {
            pack[*color][*number]=1;
            break;
        }
    }while(pack[*color][*number]!=0);
    return 0;
}
int name_card(int i,int j)
{
    if(j==0)
        printf("2 of ");
    if(j==1)
        printf("3 of ");
    if(j==2)
        printf("4 of ");
    if(j==3)
        printf("5 of ");
    if(j==4)
        printf("6 of ");
    if(j==5)
        printf("7 of ");
    if(j==6)
        printf("8 of ");
    if(j==7)
        printf("9 of ");
    if(j==8)
        printf("10 of ");
    if(j==9)
        printf("Jack of ");
    if(j==10)
        printf("Queen of ");
    if(j==11)
        printf("King of ");
    if(j==12)
        printf("Ace of ");
    if(i==0)
        printf("Diamonds \n");
    if(i==1)
        printf("Clubs \n");
    if(i==2)
        printf("Hearts \n");
    if(i==3)
        printf("Spades \n");
    return 0;
}
int generateHand()
{
    int i,j,color,number;
    for(i=0;i<5;i++)
    {
        generate_card(&color,&number);
        name_card(color,number);
    }
    return 0;
}
int num_colors()
{
    int colors=0,i,j;
    for(i=0;i<NUM_SUITS;i++)
        for(j=0;j<NUM_RANKS;j++)
            if(pack[i][j])
            {
                colors++;
                break;
            }
    return colors;
}
int maxrank(int x)
{
    int i,counter=0;
    for(i=0;i<NUM_SUITS;i++)
        if(pack[i][x])
            counter++;
    return counter;
}
int sequence()
{
    int count=0,ok=0,i,j;
    for(i=0;i<NUM_RANKS;i++)
    {
        for(j=0;j<NUM_SUITS;j++)
            if(pack[j][i])
            {
                ok=1;
                break;
            }
        if(ok)
            count++;
        else
            count=0;
        if(count==5)
            return i;
        ok=0;
    }
    return 0;
}
int royal_flush()
{
    if(num_colors()==1 && sequence()==NUM_RANKS-1)
    {
        printf("\nYou have Royal Flush\n");
        return 1;
    }
    return 0;
}
int straight_flush()
{
    if(num_colors()==1 && sequence()!=0)
    {
        printf("\nYou have Straight Flush\n");
        return 1;
    }
    return 0;
}
int four_kind()
{
    int i;
    for(i=0;i<NUM_RANKS;i++)
        if(maxrank(i)==4)
        {
            printf("\nYou have Four of a Kind\n");
            return 1;
        }
    return 0;
}
int full_house()
{
    int i,c=0;
    for(i=0;i<NUM_RANKS;i++)
        if(maxrank(i)==3)
            c=1;
    if(!c)
        return 0;
    for(i=0;i<NUM_RANKS;i++)
        if(maxrank(i)==2)
        {
            printf("\nYou have Full House\n");
            return 1;
        }
    return 0;
}
int flush()
{
    if(num_colors()==1)
    {
        printf("\nYou have Flush");
        return 1;
    }
    return 0;
}
int straight()
{
    if(sequence())
    {
        printf("\nYou have Straight");
        return 1;
    }
    return 0;
}
int three_kind()
{
    int i;
    for(i=0;i<NUM_RANKS;i++)
        if(maxrank(i)==3)
        {
            printf("\nYou have Three of a Kind\n");
            return 1;
        }
    return 0;
}
int two_pairs()
{
    int i,c=0;
    for(i=0;i<NUM_RANKS;i++)
        if(maxrank(i)==2)
            c++;
    if(c==2)
    {
        printf("\nYou have Two Pairs\n");
        return 1;
    }
    return 0;
}
int pair()
{
    int i;
    for(i=0;i<NUM_RANKS;i++)
        if(maxrank(i)==2)
        {
            printf("\nYou have One Pair\n");
            return 1;
        }
    return 0;
}
int high_card()
{
    int i,j;
    for(i=NUM_RANKS-1;i>=0;i--)
        for(j=0;j<NUM_SUITS;j++)
            if(pack[j][i])
            {
                printf("\nYou have High Card of ");
                name_card(j,i);
                return 0;
            }
}
int main()
{
    printf("You have: \n\n");
    generateHand();
    if(royal_flush())
        return 0;
    if(straight_flush())
        return 0;
    if(four_kind())
        return 0;
    if(full_house())
        return 0;
    if(flush())
        return 0;
    if(straight())
        return 0;
    if(three_kind())
        return 0;
    if(two_pairs())
        return 0;
    if(pair())
        return 0;
    high_card();
    return 0;
}
