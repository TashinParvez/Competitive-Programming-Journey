#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

        printf("Guess a number between 1 to 100.\nYour guess is ");
    do
    {
        scanf("%d", &guess);
        if (guess == number)
        {
            printf("Congratulations\nYour number is correct\nYou take %d guesses to correct your guess.", nguesses);
        }
        else if (guess > number)
        {
            printf("sorry your guess is not correct\nGuess a smaller number ");
        }
        else if (guess < number)
        {
            printf("sorry your guess is not correct\nGuess a larger number ");
        }
        nguesses++;
    } while (guess != number);
    return 0;
}