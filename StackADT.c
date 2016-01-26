#include <stdlib.h>
#include <stdio.h>
#include "StackADT.h"

struct node{

    Item numericData1;
    struct node* next;
};

struct privateData{

    struct node* start;
    int sizeOfStack;
};

static void terminate(char* message){

    printf("%s\n", message);
    exit(EXIT_FAILURE);
}


Stack createStack(Item num){

 struct privateData* tmp;

    tmp = malloc(sizeof(struct privateData));
    if(tmp == NULL){
        terminate("Error: malloc failed on creating stack, out of memory.");
    }
    tmp->sizeOfStack = 1;

    tmp->start = malloc(sizeof(struct node));
    if(tmp->start == NULL){
        terminate("Error: malloc failed on creating node, out of memory.");
    }
    tmp->start->numericData1 = num;
    tmp->start->next = NULL;

    return tmp;
}


bool isEmpty(Stack a){

    if(a->sizeOfStack == 0){
        return true;
    }else{
        return false;
    }
}


int getStackSize(Stack a){

    return a->sizeOfStack;
}


int pop(Stack a){

 Item tmp = 0;

    if(isEmpty(a) == true){
        terminate("Error: Trying to pop empty function.");
    }

    tmp = a->start->numericData1;
    a->sizeOfStack--;

    struct node* tmpNode = a->start;
    a->start = a->start->next;
    free(tmpNode);

    return tmp;
}


void push(Stack a, Item num){

 struct node* tmp;

    tmp = malloc(sizeof(struct node));
    if(tmp == NULL){
        terminate("Error: malloc failed on creating node, out of memory.");
    }

    tmp->numericData1 = num;
    tmp->next = a->start;

    a->start = tmp;
    a->sizeOfStack++;
}


void destroyStack(Stack a){

 struct node* tmp;

    for(struct node* i = a->start; i != NULL;){

        tmp = i;
        i = i->next;

        free(tmp);
    }
    free(a);
}
