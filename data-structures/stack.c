#include "stack.h"


struct dataStruct stack_init(int dataType, int capacity) 
{
    if (capacity <= 0)
    {
        printf("Invalid capacity: must be > 0!\n");
    }
    struct dataStruct myStack;

    switch(dataType)
    {
        case 0: 
            myStack->typeSize = sizeof(int);
            break;
        case 1:
            myStack->typeSize = sizeof(char);
            break;
        case 2:
            myStack->typeSize = sizeof(char*);
            break;
        default:
            return NULL;
    }

    if (myStack->capacity == 0)
    {
        myStack->data_struct = malloc(capacity * myStack->typeSize);
        myStack->capacity = capacity;
        myStrict->size = 0;
    }
    else 
    {
        myStack->data_struct = realloc(myStack->data_struct, capacity * myStack->typeSize);
        myStack->capacity = capacity;
    }
}

/**
 * If the size of the stack is 0, return true
 * 
 * @param myStack The name of the stack you want to check.
 * 
 * @return A boolean value.
 */
bool stack_is_empty(struct dataStruct myStack)
{
    return myStack->size == 0;
}


/**
 * Pushing an element to the stack if it is not at capacity
 * 
 * @param myStack The stack that you want to push an element to.
 * @param element The element to be pushed into the stack.
 * 
 * @return true if successful, false otherwise.
 */
bool stack_push(struct dataStruct* myStack, T element)
{
    if (myStack->capacity > myStack->size)
    {
        myStack->data_struct[myStack->size] = element;

        if (myStack->data_struct[myStack->size] == element)
        {
            myStack->size += 1;
            return true;
        }
    }

    return false; 
}


/**
 * If the stack is empty, return NULL. Otherwise, remove the last
 * element from the stack and return it
 * 
 * @param myStack The stack that you want to pop an element from.
 * 
 * @return The top element in the stack.
 */
elementType stack_pop(struct dataStruct* myStack)
{
    if (myStack->size == 0) return NULL;

    elementType removedElement = myStack->data_struct[myStack->size];
    myStack->size -= 1;

    return removedElement;
}


/**
 * If the stack is empty, return NULL. Otherwise, return the top
 * element of the stack
 * 
 * @param myStack The name of the stack you want to use.
 * 
 * @return The top element in the stack.
 */
elementType stack_peek(struct dataStruct myStack)
{
    if (myStack->size == 0) return NULL;

    return myStack->data_struct[myStack->size];
}


/**
 * This function searches for an element in the stacl and returns
 * the index of it, starting from the top of the stacl, 
 * otherwise it returns -1
 * 
 * @param myStack The stacl that you want to search through.
 * @param element The element to search for.
 * 
 * @return The index of the element in the stack.
 */
int stack_search(struct dataStruct myStack, T element)
{
    if (myStack->size == 0) return -1;

    for (int i = myStack->size; i >= 0; i--)
    {
        if (myStack->data_struct[i] == element)
        {
            return myStack->size - i;
        }
    }

    return -1;
}


/**
 * It sets the size of the stack to 0.
 * 
 * @param myStack The stack you want to empty.
 */
void stack_empty(struct dataStruct* myStack)
{
    myStack->size = 0;
}


/**
 * The function frees the memory allocated for the stack
 * 
 * @param myStack The stack to free.
 */
void stack_free(struct dataStruct* myStack)
{
    myStack->size = 0;
    myStack->capacity = 0;
    
    free(myStack->data_struct);
}
