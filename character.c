#include <stdio.h>
#include <stdlib.h>

char stack[64];
int count;
char string[64] = "suzie";

void push(char x){
    if(count == 64){
        fprintf(stderr,"There is no more space\n");
        exit(1);
    }
    stack[count] = x;
    count++;
}

char pop(){
    if(count == 0){
        fprintf(stderr, "Nothing to take from stack\n");
    }
    char result = stack[count - 1];
    count--;
    return result;
}

int main(int argc, char* argv[]){
    int i;
    for(i = 0; i < 5; i++){
        push(string[i]);
    }
    for(i = 0; i < 5; i++){
        printf("%c ", pop());
    }

    return 0;
}