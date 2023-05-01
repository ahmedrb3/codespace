#include <stdio.h>
#include <cs50.h>

int main(void){

    int count = -1;
    while(count < 1){
    count = get_int("count: ");
    }
    for(int i = 0; i < count; i++){
        printf("?");
    }
    printf("\n");
}