#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess, number;
    srand(time(0));
    number = rand() % 100 + 1;

    printf("Guess the number (1 to 100): ");
    do
    {
        scanf("%d", &guess);
        if (guess < number)
            printf("Too low. Try again: ");
        else if (guess > number)
            printf("Too high. Try again: ");
        else
            printf("Correct! The number was %d\n", number);
    } while (guess != number);

    return 0;
}
