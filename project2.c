#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int randomNumber, guessed_number;
    int no_of_guesses = 0;

    srand(time(0));
    randomNumber = (rand() % 100) + 1;

    do {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        no_of_guesses++;

        if (guessed_number > randomNumber) {
            printf("Lower number please\n");
        }
        else if (guessed_number < randomNumber) {
            printf("Higher number please\n");
        }
        else {
            printf("Congrats!! You nailed it.\n");
        }

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
