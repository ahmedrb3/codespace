#include <stdio.h>
#include <cs50.h>
int main(void){
    int numbers[] = {4,7,6,9};
    printf("%i\n", *numbers);
    printf("%i\n", *(numbers+1));
    printf("%i\n", *(numbers+2));
    printf("%i\n", *(numbers+3));
}

//int main(void){
//  char *s = "HI!";
//  printf("%c\n", *s);
//  printf("%c\n", *(s+1));
//  printf("%c\n", *(s+2));
//  printf("%c\n", *(s+3));
//}