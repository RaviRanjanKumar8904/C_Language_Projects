#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    // This ensures you get a different number each time you run the program
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int Guessed_Number;
    int Guess_Counter = 0;

    do
    {
        printf("\nGuess the Number: ");
        scanf("%d", &Guessed_Number);

        if (Guessed_Number < randomNumber)
        {
            printf("\nEnter larger Number");
        }
        else if (Guessed_Number > randomNumber)
        {
            printf("\nEnter Smaller Number");
        }
        else
        {
            printf("\nCongratulation!!! You Got it.");
        }
        Guess_Counter++;
    } while (Guessed_Number != randomNumber);

    printf("\nYou taked %d attempt", Guess_Counter);

    return 0;
}