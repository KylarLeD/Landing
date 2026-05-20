# Number Guesser

## Overview
More C practice, today I wrote a number guesser game.

It creates a random number, then prompts the user to guess from 1-100, if incorrect the program will prompt the user "Higher!" or "Lower!".

## What I Learned

1. **Using `<time.h>` for random number seeding**  
I learned how to use `srand(time(NULL))` from `<time.h>` to initialize the random number generator so that `rand()` produces different results each run.

2. **Basic input validation for `scanf()`**  
Made it so the user can only input integers to prevent the program from getting stuck due to invalid input causing `scanf()` to fail and desynchronize input handling

3. **How to count the amount of times the `while(1)` loop is triggered**  
I wanted to count the number of guesses it took the user to guess the correct number, so I added this as well.
