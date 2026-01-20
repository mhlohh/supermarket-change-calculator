#include<stdio.h>

const int coins [] = {25,10,5,1};
int main(void)
{
    int MAX = 4;
    int cost = 0;
    int money = 0;
    printf("Enter the cost: ");
    scanf("%i",&cost);
    printf("Enter the money: ");
    scanf("%i",&money);
    if (cost > money)
    {
        printf("Insuficent Fund\n");
        return 1;
    }
    int change = money - cost;
    int no_coins[]= {0,0,0,0};
    for(int i = 0; i < MAX;i++)
    {
      no_coins [i] = change/coins[i];
      change = change%coins[i];
    }
    printf("Quarter: %i\n",no_coins[0]);
    printf("Dimes: %i\n",no_coins[1]);
    printf("Nickels: %i\n",no_coins[2]);
    printf("Pennies: %i\n",no_coins[3]);
}
