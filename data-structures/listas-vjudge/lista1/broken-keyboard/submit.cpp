#include <iostream>
#include <vector>

using namespace std;

template <typename E>
class Stack
{
private:
    void operator=(const Stack &) {}
    Stack(const Stack &) {}

public:
    Stack() {}
    virtual ~Stack() {}

    virtual void clear() = 0;
    virtual void push(const E &it) = 0;
    virtual E pop() = 0;
    virtual const E &topValue() const = 0;
    virtual int length() const = 0;
};

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

void brokenKeyboard(const string &frase);

int main()
{

    string frase;

    while (getline(cin, frase))
    {
        brokenKeyboard(frase);
    }

    return 0;
}

void brokenKeyboard(const string &frase)
{
    AStack<char> st;
    bool emp = false;
    vector<char> str;

    for (char c : frase)
    {
        if (c == '[' && emp == false)
        {
            emp = true;
        }
        else if (c == '[' && emp == true)
        {
            while (st.length() > 0)
            {
                char c = st.pop();
                str.insert(str.begin(), c);
            }
        }
        if ((c != '[' && c != ']') && emp == false)
        {
            str.push_back(c);
        }
        else if ((c != '[' && c != ']') && emp == true)
        {
            st.push(c);
        }
        if (c == ']')
        {
            emp = false;
            while (st.length() > 0)
            {
                char c = st.pop();
                str.insert(str.begin(), c);
            }
        }
    }

    if (st.length() > 0)
    {
        while (st.length() > 0)
        {
            char c = st.pop();
            str.insert(str.begin(), c);
        }
    }

    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i];
    }
    cout << endl;
}