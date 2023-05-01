#include <stdio.h>
#include <cs50.h>

float discount(float regular);

int main(void){

    float regular = get_float("regular price: ");
    float sale = discount(regular);
    printf("sale price = %.2f\n", sale);
}

float discount(float regular){
    return regular * .85;
}