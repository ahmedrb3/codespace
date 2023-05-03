#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string name;
    string number;
    int age;
}pb;

int main(void){

    pb people[2];

    people[0].name = "ahmed";
    people[0].number = "012456";

    people[1].name = "devid";
    people[1].number = "010123";

    for(int i = 0; i < 2; i++ ){
        if(strcmp(people[i].name, "ahmed") == 0){
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}