#include <stdio.h>
#include <cs50.h>

int main(void){
    int length = get_int("How many score? ");
    int scores[length];
    int result = 0;
    for(int i = 0; i < length; i++){
    scores[i] = get_int("number: ");
    }
    printf("average %.2f\n", (scores[0] + scores[1] + scores[2])/3.0);
}