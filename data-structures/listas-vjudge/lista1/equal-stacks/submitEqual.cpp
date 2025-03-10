#include <iostream>
#include <vector> //importanto vector para tratamento de entradas

using namespace std;

template <typename E>
class List
{
private:
    void operator=(const List &) {}
    List(const List &) {}

public:
    List() {}
    virtual ~List() {} 
    virtual void clear() = 0;

    virtual int sum() = 0;
    virtual void insert(const E &item) = 0;   
    virtual void append(const E &item) = 0;  
    virtual E remove() = 0;   
    virtual void moveToStart() = 0;
    virtual void moveToEnd() = 0;    
    virtual void prev() = 0;  
    virtual void next() = 0;  
    virtual int length() const = 0;
    virtual int currPos() const = 0;  
    virtual void moveToPos(int pos) = 0;
    virtual const E &getValue() const = 0;
};

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

int equalStacks(AList<int> &h1, AList<int>& h2, AList<int> &h3);

int main() {

    int input;
    vector<int> lenStacks;

    for(int i = 0; i < 3; i++)
    {
        cin >> input;
        lenStacks.push_back(input);
    }
    
    AList<int> h1(lenStacks[0]);
    AList<int> h2(lenStacks[1]);
    AList<int> h3(lenStacks[2]);
    
    for(int i=0; i < lenStacks[0]; i++){
        cin >> input;
        h1.append(input);
    }
    for(int i=0; i < lenStacks[1]; i++){
        cin >> input;
        h2.append(input);
    }
    for(int i=0; i < lenStacks[2]; i++){
        cin >> input;
        h3.append(input);
    }
    
    cout << equalStacks(h1, h2, h3) << endl;
    
    return 0;
}

int equalStacks(AList<int> &h1, AList<int>& h2, AList<int> &h3) {
    int sum1=0, sum2=0, sum3=0;

    

    sum1 = h1.sum();
    h1.moveToStart();
    sum2 = h2.sum();
    h2.moveToStart();
    sum3 = h3.sum();
    h3.moveToStart();
    
    if(sum1 == sum2 && sum1==sum3) {
        return sum1;
    }
    
    while (sum1 != sum2 || sum1 != sum3) {
        if(sum1 > sum2 || sum1 > sum3) {
            sum1 -= h1.remove();
        }
        if(sum2 > sum1 || sum2 > sum3) {
            sum2 -= h2.remove();
        }
        if(sum3 > sum2 || sum3 > sum1) {
            sum3 -= h3.remove();
        }
    }
    
    return sum1;
}