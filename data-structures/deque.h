#include "stack.h"
// since deque is invertable stack

void addFirst(struct structName* data, elementType element);
void addLast(struct structName* data, elementType element);
elementType getFirst(struct structName data);
elementType getLast(struct structName data);
elementType removeFirst(struct structName* data);
elementType removeLast(struct structName* data);
bool contains(struct structName data, elementType element);
