#include <stdio.h>
#include <unistd.h>

int main()
{
    int remaining_matches = 21, player_choice, computer_choice;


    while (remaining_matches > 1)
    {
        printf("\nCurrent matchsticks left: %d\n", remaining_matches);
        printf("Pick matchsticks (1 to 4): ");
        scanf("%d", &player_choice);

        if (player_choice < 1 || player_choice > 4)
        {
            printf("Invalid input. Please pick a number between 1 and 4.\n");
            continue;
        }

        remaining_matches -= player_choice;
        printf("You picked %d matchstick(s).\n", player_choice);


        if (remaining_matches == 1)
        {
            printf("Only 1 matchstick remains. Congratulations, you won!\n");
            break;
        }

        sleep(1);
        printf("Now, the computer is picking...\n");
        sleep(1);

        computer_choice = 5 - player_choice;

        remaining_matches -= computer_choice;
        printf("Computer picked %d matchstick(s).\n", computer_choice);

        if (remaining_matches == 1)
        {
            printf("Only 1 matchstick remains. The computer won! You lost.\n");
            break;
        }
    }

    return 0;
}

