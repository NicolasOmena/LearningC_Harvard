#include <cs50.h>
#include <stdio.h>

int get_positive_int(void){
    int PositiveN;
    do{ PositiveN = get_int("How much meows do you want? ");
    }while (PositiveN < 1);
    return PositiveN;
}
    int main(void){
        int positiveNumber = get_positive_int();
        printf("Enter a number: ");
        scanf("You entered: %d\n", positiveNumber);
}
