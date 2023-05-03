#include <stdio.h>
#include <cs50.h>
int main(void){
    string s = get_string("s: ");
    string t = get_string("t: ");
    if(s == t){
        printf("Same\n");
    }
    else{
        printf("Different\n");
    }
}

//    int i = get_int("i: ");
//  int j = get_int("s: ");
//  if(i == j){
//      printf("Same\n");
//  }
//  else{
//      printf("Different\n");