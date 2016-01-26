#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>

/*
'int' can be changed to other numeric data types (float, bool, double, etc...) as per need of the user.
*/
typedef int Item;

/*
The Stack abstract data type, use this type for manipulating stacks.
*/
typedef struct privateData* Stack;

/*********************************************
* createStack: Creates a brand new stack with*
* an initial value and a size of 1.          *
*                                            *
* Param1 'Item num': The user specified init-*
* ial value.                                 *
*                                            *
* Return 'Stack': The brand new dynamically  *
* allocated stack object.                    *
*********************************************/
Stack createStack(Item num);

/*********************************************
* isEmpty: Tests whether or not the specified*
* stack is empty. This function is mostly    *
* used internally by the other Stack         *
* functions, allthough it's safe, consider   *
* using getStackSize.                        *
*                                            *
* Param1 'Stack a': The stack object to be   *
* tested.                                    *
*                                            *
* Return 'bool': A boolean value indicating  *
* the state of the stack, true (1) stack IS  *
* empty, false (0) stack ISN'T empty.        *
*********************************************/
bool isEmpty(Stack a);

/*********************************************
* getStackSize: Obtains the total number of  *
* elements currently stored in the specified *
* stack.                                     *
*                                            *
* Param1 'Stack a': The stack object to be   *
* tested.                                    *
*                                            *
* Return 'int': The amount of elements stored*
* in this stack represented as an int.       *
*********************************************/
int getStackSize(Stack a);

/*********************************************
* pop: Obtains the top most element in the   *
* stack, afterwhich the memory used to store *
* that element is permanently destroyed.     *
*                                            *
* Param1 'Stack a': The stack object to be   *
* affected by the pop operation.             *
*                                            *
* Return 'Item': The numeric value (defined  *
* by the Item typedef, see top of page) of   *
* the top most element.                      *
*********************************************/
Item pop(Stack a);

/*********************************************
* push: Creates a new element with the user  *
* specified value and puts it on top of the  *
* stack.                                     *
*                                            *
* Param1 'Stack a': The stack object to be   *
* affected by the push operation.            *
*                                            *
* Param2 'Item num': The numeric value which *
* is to be pushed on to the stack.           *
*                                            *
* Return 'void': Nothing to return.          *
*********************************************/
void push(Stack a, Item num);

/*********************************************
* destroyStack: Completly destroys all the   *
* elements in the stack, including the stack *
* object as well. Function must be called    *
* when the stack is no longer being used,    *
* even if it's fully empty.                  *
*                                            *
* Param1 'Stack a': The stack object to be   *
* affected by the destroy operation.         *
*                                            *
* Return 'void': Nothing to return.          *
*********************************************/
void destroyStack(Stack a);

#endif //STACKADT_H
