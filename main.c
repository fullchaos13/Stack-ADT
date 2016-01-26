/* General purpose main function used to demonstrate and test the various aspects of the Stack object.*/

#include <stdio.h>
#include "StackADT.h"

int main(){

 Stack a = createStack(10);

    printf("-----Create (10)-----\n");
    printf("Is empty: %d\n", isEmpty(a));
    printf("Stack size: %d\n\n", getStackSize(a));

    push(a, 7);
    printf("-----Push (7)-----\n");
    printf("Is empty: %d\n", isEmpty(a));
    printf("Stack size: %d\n\n", getStackSize(a));

    printf("-----POP-----\n");
    printf("Value: %d\n", pop(a));
    printf("Is empty: %d\n", isEmpty(a));
    printf("Stack size: %d\n\n", getStackSize(a));

    printf("-----POP-----\n");
    printf("Value: %d\n", pop(a));
    printf("Is empty: %d\n", isEmpty(a));
    printf("Stack size: %d\n\n", getStackSize(a));

    destroyStack(a);

return 0;}
