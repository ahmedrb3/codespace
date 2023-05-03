#include <stdio.h>
#include <cs50.h>

int main(void){
    string names[] = {"ahmed","gamal","mazen","ali","mai","mariam","sara"};

    for(int i = 0; i < 7;i++){
        if(numbers[i] == -1){
            printf("found in %i steps\n", i + 1);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}