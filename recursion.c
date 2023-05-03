#include <stdio.h>
#include <cs50.h>
void draw(int n);

int main(void){
    int height = get_int("height: ");
    draw(height);
}
void draw(int n){
    for(int i = 0;i < n; i++){
        printf("#");
    }
        printf("\n");
        draw(n - 1);
}

//void drawi(int n){
//    for(int i = 0; i < n;i++){
//          for(int j = 0;j < i + 1;j++){
//            printf("#");
//        }