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
    char string[100] = "tacocat";
    char string2[100];
    Stack.top = -1;

    int numOfElements = strlen(string);

    reverse(string, numOfElements);

    for(int i = 0; i < numOfElements; i++){
        string2[i] = pop();
    }
    printf("\n");

    if(strcmp(string,string2) == 0){
        printf("%s is a palindrome", string);
    }else{
        printf("%s is not a palindrome", string);
    }

    return 0;
}