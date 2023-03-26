#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>


union {
    int* intArray;
    char* charArray;
    char** strArray;
} structTypes;

struct dataStruct {
    int size;
    union structTypes data;
    int capacity;
    uint8_t typeSize;
};

