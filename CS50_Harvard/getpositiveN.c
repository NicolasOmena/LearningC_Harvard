#include <cs50.h>
#include <stdio.h>

int get_positive_int(void){
    int PositiveN;
    do{ PositiveN = get_int("How much meows do you want? ");
    }while (PositiveN < 1);
}
