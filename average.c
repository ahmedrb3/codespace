#include <stdio.h>
#include <cs50.h>

int main(void){
    int score[3] = {72, 73, 33};
    printf("average %.2f\n", (score[0] + score[1] + score[2])/3.0);
}