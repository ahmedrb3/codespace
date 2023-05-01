#include <stdio.h>
#include <cs50.h>

int main(void){

    float regular = get_float("regular price: ");
    float sale = regular * .85;
    printf("sale price = %.2f\n", sale);
}