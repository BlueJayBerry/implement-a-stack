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
    int result = Stack.array[Stack.count - 1];
    Stack.count--;
    return result;
}

int main(int argc, char* argv){
    push(1);
    push(4);
    push(5);

    int i;
    int range = Stack.count;
    for(i = 0; i < range; i++){
        printf("%d ", pop());
    }

    return 0;
}