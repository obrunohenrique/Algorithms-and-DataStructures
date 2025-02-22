#ifndef _ASTACK_
#define _ASTACK_

#include "stack.h"

using namespace std;

template <typename E>
class AStack : public Stack<E>
{
private:
    int maxSize;
    int top;
    E *listArray;

public:
    AStack(int size = 200) // Constructor
    {
        maxSize = size;
        top = 0;
        listArray = new E[size];
    }
    
    ~AStack() { delete[] listArray; } // Destructor
    
    void clear() { top = 0; }
    
    void push(const E &it)
    {
        listArray[top++] = it;
    }
    E pop()
    {
        // Pop top element
        return listArray[--top];
    }
    const E &topValue() const
    {
        // Return top element
        return listArray[top - 1];
    }
    int length() const { return top; } // Return length
};

#endif