#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Lets go play a GAME\nGuess a number between 1 to 100. You can only guess 3 times.\nYour first guess numnber is ");
    scanf("%d", &guess);


    for (int i = 1; i < 4;)
    {
        if (guess == number)
        {
            printf("Congratulation, Your Guess is correct and the number is %d", number);
            return 0;
        }
        else if (guess > number && i<3)
        {
            printf("Sorry, Your guess is not correct. Please try again & pic a smaller number from the previous number \n");
            printf("Your guess number is ");
            scanf("%d", &guess);
            i++;
        }

        else if (guess < number && i<3)
        {
            printf("Sorry, Your guess is not correct. Please try again & pic a larger number from the previous number \n");
            printf("Your guess number is ");
            scanf("%d", &guess);
            i++;
       
        }
        else{
            break;
        }
    }

    printf("Sorry, Your guess is again incorrect. You can no longer guess.\nThe number was %d\nDo You wanna to play again?", number);
    return 0;
}