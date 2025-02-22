#ifndef _AQUEUE_
#define _AQUEUE_

#include "queue.h"

template <typename E>
class AQueue : public Queue<E>
{
private:
    int maxSize;
    int front;
    int rear;
    E *listArray;

public:
    AQueue(int size = 100)
    {
        maxSize = size + 1;
        rear = 0;
        front = 1;
        listArray = new E[maxSize];
    }
    ~AQueue() { delete[] listArray; }
    void clear()
    {
        rear = 0;
        front = 1;
    }
    void enqueue(const E &it)
    {
        rear = (rear + 1) % maxSize;

        listArray[rear] = it;
    }
    E dequeue()
    {
        E it = listArray[front];
        front = (front + 1) % maxSize;

        return it;
    }
    const E &frontValue() const
    {
        return listArray[front];
    }
    virtual int length() const

    {
        return ((rear + maxSize) - front + 1) % maxSize;
    }
};

#endif