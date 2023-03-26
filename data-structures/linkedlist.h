#include "structs.h"

struct {
    elementType data;
    elementType next; 
} Node;

struct Node head;

void llist_init(struct structName* data, int capacity);
bool llist_add(struct structName* data, elementType element);
bool llist_remove(struct structName* data);
bool llist_insert(struct structName* data, elementType element, int index);
bool llist_remove_element(struct structName* data, elementType element);
bool llist_remove_index(struct structName* data, int index);