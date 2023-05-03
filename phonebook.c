#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string name;
    string number;
    
}pb;

int main(void){

    pb people[2];

    people[0].name = "ahmed";
    people[0].number = "012456";

    for(int i = 0; i < 2; i++ ){
        if(strcmp(names[i], "ali") == 0){
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}