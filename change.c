#include <stdio.h>

// Coin denominations in descending order (US currency)
// Using greedy approach: always take the largest coin possible
const int coins[] = {25, 10, 5, 1};

int main(void)
{
    int MAX = 4;          // Total number of coin types
    int cost = 0;         // Cost of the item
    int money = 0;        // Money given by the user

    // Input cost
    printf("Enter the cost: ");
    scanf("%i", &cost);

    // Input money paid
    printf("Enter the money: ");
    scanf("%i", &money);

    // Check for insufficient funds
    if (cost > money)
    {
        printf("Insufficient Fund\n");
        return 1;         // Exit program with error code
    }

    // Calculate remaining change
    int change = money - cost;

    // Array to store number of each coin used
    int no_coins[] = {0, 0, 0, 0};

    // Greedy algorithm to calculate minimum coins
    for (int i = 0; i < MAX; i++)
    {
        // Number of coins of current denomination
        no_coins[i] = change / coins[i];

        // Remaining change after using current coins
        change = change % coins[i];
    }

    // Output results
    printf("Quarters: %i\n", no_coins[0]);
    printf("Dimes: %i\n", no_coins[1]);
    printf("Nickels: %i\n", no_coins[2]);
    printf("Pennies: %i\n", no_coins[3]);

    return 0;  // Successful execution
}
