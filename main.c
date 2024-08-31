#include <stdio.h>
#include <stdlib.h>

int stack[128];
int count;
int arr[128] = {1,23,543,342};

void push(int x){
    if(count == 128){
        fprintf(stderr,"There is no more space\n");
        exit(1);
    }
    stack[count] = x;
    count++;
}

int pop(){
    if(count == 0){
        fprintf(stderr,"Nothing to take from stack\n");
        exit(1);
    }
    int result = stack[count - 1];
    count--;
    return result;
}

int main(int argc, char* argv[]){
    int i;

    for(i = 0; i < 4; i++){
        push(arr[i]);
    }
    for(i = 0; i < 4; i++){
        printf("%d ", pop());
    }
    return 0;
}