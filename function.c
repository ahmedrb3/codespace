#include <stdio.h>
#include <cs50.h>

float discount(float regular);

int main(void){

    float regular = get_float("regular price: ");
    int percent = get_int("percent of: ");
    float sale = discount(regular, percent);
    printf("sale price = %.2f\n", sale);
}

float discount(float regular, int ){
    return regular * .85;
}