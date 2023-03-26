#include "structs.h"

struct dataStruct stack_init(int type, int capacity);
bool stack_is_empty(struct dataStruct myStack);
bool stack_push(struct dataStruct* myStack, elementType element);
union dataTypes stack_pop(struct dataStruct* myStack);
union dataTypes stack_peek(struct dataStruct myStack);
int stack_search(struct dataStruct myStack, elementType element);
void stack_empty(struct dataStruct* myStack);
void stack_free(struct dataStruct* myStack);