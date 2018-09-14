/*This program will order 3 numbers given by the user
  from the lowest to the highest value using parameters by reference

  Author: Hugo Aguirre
  Date: September 13, 2018
  */


#include <stdio.h>

//we declare the function by reference of the program
void order (double *a, double *b) {
    double inter;

    if(*a > *b) {
        inter = *a;
        *a = *b;
        *b = inter;
    }
}

int main() {
    //variable declaration
    double num1, num2, num3;

    //we ask the user to enter 3 numbers, telling him we will order them from lowest to highest
    printf("Welcome user, I will help you to order 3 numbers from the lowest to the highest\n");
    printf("Please write 3 numbers:\n ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    //we order the values using parameters putting the lowest in the first spot
    // and the highest in the third one
    order(&num1, &num2);
    order(&num1, &num3);
    order(&num2, &num3);

    //we print de numbers in order from low to high
    printf("Lowest=%lf\tMiddle=%lf\tHighest=%lf", num1, num2, num3);

    return 0;
}








