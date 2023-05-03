#include <stdio.h>
#include <cs50.h>
void draw(int n);

int main(void){
    int height = get_int("height: ");
    draw(height);
}
void draw(int n){
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n;j++){
            printf("#");
        }
        printf("\n");
    }
}