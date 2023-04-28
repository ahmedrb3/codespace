#include <stdio.h>
#include <cs50.h>
int main(void){
    int x = get_int("x: ");
    int y = get_int("y: ");
    if(x < y){
        printf("x is less than y\n");
    }
    else if(x > y){
        printf("x is not less than y\n");
    }
    else if(x == y){
        printf("x = y\n");
    }
}