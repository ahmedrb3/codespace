#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    char *s = get_string("s= ");
    char *t = malloc(strlen(s) + 1);
    if(t == NULL){
        return 1;
    }
    strcpy(t, s);
    t[0] = toupper(t[0]);
    printf("s: %s\n", s);
    printf("t: %s\n", t);
    free(t);
}
//  for(int i = 0; i < strlen(s) + 1; i++){
//      t[i] = s[i];}