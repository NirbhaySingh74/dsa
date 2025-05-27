#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICE_COUNT 5
#define ROUNDS 5

void display_dice(int dice[], int max_dice);
void roll_dice(int dice[], int size);
void reroll_selected_dice(int dice[], int size);
int evaluate_roll(int dice[], int size, int *regular_slimes, int *boss_slimes);

int main()
{
    int dice[DICE_COUNT];
    char choice;
    int boss_slimes = 0, regular_slimes = 0, failed = 0;

    srand(time(NULL));

    printf("Welcome to The Slime Slayer!\n");
    printf("You have %d rounds to slay as many slimes as you can!\n\n", ROUNDS);

    for (int round = 1; round <= ROUNDS; round++)
    {
        printf("=== Round %d ===\n", round);
        printf("Press 'r' to roll the dice: ");
        scanf(" %c", &choice);

        if (choice != 'r' && choice != 'R')
        {
            printf("Invalid input. Skipping round.\n");
            failed++;
            continue;
        }

        roll_dice(dice, DICE_COUNT);
        printf("\nYou rolled:\n");
        display_dice(dice, DICE_COUNT);

        printf("Would you like to reroll any dice? (y/n): ");
        scanf(" %c", &choice);

        if (choice == 'y' || choice == 'Y')
        {
            reroll_selected_dice(dice, DICE_COUNT);
            printf("\nAfter reroll:\n");
            display_dice(dice, DICE_COUNT);
        }

        int result = evaluate_roll(dice, DICE_COUNT, &regular_slimes, &boss_slimes);
        if (result == 0)
            failed++;

        printf("\n-------------------------------\n\n");
    }

    // Final scoreboard
    printf("Game Over! Here's your final scoreboard:\n");
    printf("Boss Slimes Slain   : %d\n", boss_slimes);
    printf("Regular Slimes Slain: %d\n", regular_slimes);
    printf("Failed Attempts      : %d\n", failed);
    printf("Total Score          : %d\n", boss_slimes * 3 + regular_slimes);

    return 0;
}

void roll_dice(int dice[], int size)
{
    for (int i = 0; i < size; i++)
    {
        dice[i] = rand() % 6 + 1;
    }
}

void reroll_selected_dice(int dice[], int size)
{
    int reroll_flags[DICE_COUNT] = {0};

    printf("Enter dice numbers to reroll (1-5), separated by space, end with 0: ");
    int input;
    while (1)
    {
        scanf("%d", &input);
        if (input == 0)
            break;
        if (input >= 1 && input <= 5)
        {
            reroll_flags[input - 1] = 1;
        }
        else
        {
            printf("Invalid die number: %d. Please enter between 1-5 or 0 to stop.\n", input);
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (reroll_flags[i])
        {
            dice[i] = rand() % 6 + 1;
        }
    }
}

int evaluate_roll(int dice[], int size, int *regular_slimes, int *boss_slimes)
{
    int count[7] = {0}; // count[1] to count[6]

    for (int i = 0; i < size; i++)
    {
        count[dice[i]]++;
    }

    if (count[6] >= 3)
    {
        printf("You rolled %d sixes! Boss Slime defeated!\n", count[6]);
        (*boss_slimes)++;
        return 1;
    }

    for (int i = 1; i <= 5; i++)
    {
        if (count[i] >= 3)
        {
            printf("You rolled %d %d's! Regular Slime defeated!\n", count[i], i);
            (*regular_slimes)++;
            return 1;
        }
    }

    printf("No slimes slain.\n");
    return 0;
}

void display_dice(int dice[], int max_dice)
{
    int i;

    printf("%16s", "");
    for (i = 0; i < max_dice; i++)
    {
        printf("Die %-4d", i + 1);
    }

    printf("\n%12s", "");
    for (i = 0; i < max_dice; i++)
    {
        printf(" [%d]   ", dice[i]);
    }

    printf("\n%12s", "");
    for (i = 0; i < max_dice; i++)
    {
        if (dice[i] == 1)
            printf("       ");
        else if (dice[i] == 2 || dice[i] == 3)
            printf("   *   ");
        else if (dice[i] == 4 || dice[i] == 5 || dice[i] == 6)
            printf(" *   * ");
    }

    printf("\n%12s", "");
    for (i = 0; i < max_dice; i++)
    {
        if (dice[i] == 1 || dice[i] == 3 || dice[i] == 5)
            printf("   *   ");
        else if (dice[i] == 6)
            printf(" *   * ");
        else
            printf("       ");
    }

    printf("\n%12s", "");
    for (i = 0; i < max_dice; i++)
    {
        if (dice[i] == 1)
            printf("       ");
        else if (dice[i] == 2 || dice[i] == 3)
            printf("   *   ");
        else if (dice[i] == 4 || dice[i] == 5 || dice[i] == 6)
            printf(" *   * ");
    }

    printf("\n\n");
}
