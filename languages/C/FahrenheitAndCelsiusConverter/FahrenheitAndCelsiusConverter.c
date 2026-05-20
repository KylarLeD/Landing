#include <stdio.h>

void ftoc(void) {

    int temp;

    printf("What is the temperature in fahrenheit?\n");
    scanf("%d", &temp);

    float conversion = (temp - 32) / 1.8;

    printf("It is %f celsius outside.\n", conversion);

}

void ctof(void) {

    int temp;

    printf("What is the temperature in celsius?\n");
    scanf("%d", &temp);

    float conversion = (temp * 1.8) + 32;

    printf("It is %f fahrenheit outside.\n", conversion);
}

int main() {

    while(1){

        char fc;
        printf("Are you converting from fahrenheit or celsius? (f/c): ");
        scanf(" %c", &fc);

        if (fc == 'f') {
            ctof();
            break;
        } else if (fc == 'c') {
            ftoc();
            break;
        }else {
            printf("Invalid input, try again...\n");
        }
    }
}
