#include <stdio.h>
#include <cs50.h>

float discount(float regular);

int main(void){

    float regular = get_float("regular price: ");
    float sale = discount(regular);
    printf("sale price = %.2f\n", sale);
}

float discount(float regular){
    float sale = regular * .85;
    return sale;
}