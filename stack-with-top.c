#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    char array[100];
    int top;
}Stack;

void push(char x){
    Stack.array[++Stack.top] = x;
}

char pop(){
    return Stack.array[Stack.top--];
}

void reverse(char* string, long numOfElements){
    for(int i = 0; i < numOfElements; i++){
        push(string[i]);
    }
}

int main(int argc, char* argv[]){
    char string[100] = "stop";
    Stack.top = -1;

    int numOfElements = strlen(string);

    reverse(string, numOfElements);

    for(int i = 0; i < numOfElements; i++){
        printf("%c", pop());
    }

    return 0;
}