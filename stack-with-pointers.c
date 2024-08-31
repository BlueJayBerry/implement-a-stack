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

void reverse(int* array, int numOfElements){
    int i;
    for(i = 0; i < numOfElements; i++){
        push(array[i]);
    }
}

int main(int argc, char argv[]){
    int array[100] = {1,2,3,4};
    Stack.count = 0;
    int numOfElements = 0;
    int i;

    for(i =0; i < 100; i++){
        if(array[i]){ 
            numOfElements++;
        }
    }

    reverse(array, numOfElements);

    for(i = 0; i < numOfElements; i++){
        printf("%d ", pop());
    }

    return 0;
}