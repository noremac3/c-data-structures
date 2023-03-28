#include "deque.h"
#include "queue.h"
// #include "linkedlist.h"


int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("Usage: code-output <inputfile> <outputfile>\n");
        exit(1);
    }

    FILE *in = fopen(argv[1], "r");
    FILE *out = fopen(argv[2], "w");
    printf("Not implementing file reading yet\n");

    fclose(in); // TODO
    fclose(out); // TODO

    struct dataStruct testStack;

    /*
    void* stack_init(int capacity)




    struct dataStruct newStruct;
    int* myStack = newStruct.data;
    newStruct = stack_init()

    */

    stack_init();
    // struct structName testStack;

    // stack_init(&testStack, 10);

    // printf("Created Stack\n");

    // if (stack_push(&testStack, 5)) printf("Push returned true");

    // if (stack_peek(testStack) == 5) 
    //     printf("Successfully Added 5 to stack\n");
    // else
    //     printf("Stack push failed!");




    
    return 0;
}