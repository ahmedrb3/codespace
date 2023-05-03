#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
int main(void){
    char *s = get_string("s= ");
    char *t = malloc(strlen(s) + 1);
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
}