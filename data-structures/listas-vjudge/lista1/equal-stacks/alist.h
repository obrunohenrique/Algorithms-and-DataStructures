#ifndef _ALIST_
#define _ALIST_

#include "list.h"

template <typename E> 
class AList : public List<E>
{
private:
    int maxSize;
    int listSize;
    int curr;
    E *listArray;

public:
    
    AList(int size)
    { 
        maxSize = size;
        listSize = curr = 0;
        listArray = new E[maxSize];
    }
    ~AList() { delete[] listArray; } 

    void clear()
    {
        delete[] listArray;
        listSize = curr = 0;
        listArray = new E[maxSize];
    }

    void insert(const E &it)
    {
        for (int i = listSize; i > curr; i--)
            listArray[i] = listArray[i - 1]; 
        listArray[curr] = it;
        listSize++;
    }

    void append(const E &it)
    {
        listArray[listSize++] = it;
    }   

    int sum(){
        int soma = 0;
        for(int i=0; i<this->length();i++) {
            soma += this->getValue();
            this->next();
        }

        return soma;
    }

   
    E remove()
    {
        E it = listArray[curr];
        for (int i = curr; i < listSize - 1; i++) 
            listArray[i] = listArray[i + 1];
        listSize--;
        return it;
    }
    void moveToStart() { curr = 0; }

    void moveToEnd() { curr = listSize; }

    void prev()
    {
        if (curr != 0)
            curr--;
    }

    void next()
    {
        if (curr < listSize)
            curr++;
    } 

    int length() const { return listSize; }

    int currPos() const { return curr; }

    void moveToPos(int pos)
    {
        curr = pos;
    }
    const E &getValue() const
    {
        return listArray[curr];
    }
};

#endif