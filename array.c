#include <stdio.h>

int main(void){
    int list[3];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    tmp[4];
    for(int i = 0; i < 3;i++){
        tmp[i] = list[i];
    }
    tmp[3] = 4;
    for(int i = 0;i < 4;i++){
        
    }
}
int sec(){
//    int list[3];
    int *list = malloc(3*sizeof(int));
    if(list == NULL){
        return 1;
    }
    *list = 1;
    *(list+1) = 2;
    *(list+2) = 3;
}