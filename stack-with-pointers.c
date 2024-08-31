#include <stdio.h>
#include <stdlib.h>

struct stack{
    int array[16];
    int count;
}Stack;

void push(int x){
    Stack.array[Stack.count] = x;
    Stack.count++;
}

int pop(){
    int result = Stack.array[Stack.count];
    Stack.count--;
    return result;
}

int main(int argc, char argv[]){
    Stack.count = 0;

    return 0;
}