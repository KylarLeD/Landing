#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int x = (rand() % 100) + 1;
    int guess;
    char input[100];
    int guessCount = 0;
    while(1) {
        printf("Guess a number from 1-100. \n");

        while (fgets(input, sizeof(input), stdin)) {
            if (sscanf(input, "%d", &guess) == 1) {
                break;
            }else{
                printf("Please input an integer between 1-100.\n");
            }
        }
        guessCount++;

        if (guess == x) {
            printf("Correct! %d is the answer!\nYou got it in %d attemps!", guess, guessCount);
            break;
        }else if (guess < x){
            printf("Higher!\n");
        }else if (guess > x) {
            printf("Lower!\n");
        }
     }

}
