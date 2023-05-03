#include <stdio.h>
#include <cs50.h>
#include <string.h>



int main(void){

    string names[] = {"ahmed","devid"};
    string numbers[] = {"012456","010123"};
    for(int i = 0; i < 2; i++ ){
        if(strcmp(names[i], "ali") == 0){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}