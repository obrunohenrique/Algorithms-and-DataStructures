#include <iostream>
#include <vector>
using namespace std;

template <typename E>
class Queue
{
private:
    void operator=(const Queue &) {}
    Queue(const Queue &) {}

public:
    Queue() {}
    
    virtual ~Queue() {} 
    virtual void clear() = 0;   
    virtual void enqueue(const E &) = 0;   
    virtual E dequeue() = 0;  
    virtual const E &frontValue() const = 0;
    virtual int length() const = 0;
};

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

void teaQueue(vector<vector<int>> &matriz);

int main()
{
    int tests, num, input;

    cin >> tests;
    
    while (tests > 0)
    {
        cin >> num;
    vector<vector<int>> uniao;

    for (int i = 0; i < num; i++) // Laço para inserir 'num' vetores de dois elementos cada
    {
        vector<int> temp; // Vetor temporário para armazenar dois inteiros

        for (int j = 0; j < 2; j++) // Sempre adiciona dois valores ao vetor temporário
        {
            cin >> input;
            temp.push_back(input);
        }

        uniao.push_back(temp); // Adiciona o vetor temp ao vetor de vetores
    }

    teaQueue(uniao);

    tests--;
    }
    
    return 0;
}

void teaQueue(vector<vector<int>> &matriz)
{
    int numEstudantes = matriz.size();
    AQueue<int> fila;
    vector<int> resultado;

    int tempoAtual = 1;
    int indiceEstudante = 0;

    while (indiceEstudante < numEstudantes || fila.length() != 0)
    {
        // pondo todos que chegarem na fila
        while ((indiceEstudante < numEstudantes) && (matriz[indiceEstudante][0] == tempoAtual))
        {
            fila.enqueue(indiceEstudante); // guardando o indice concigo buscar exatamente o estudante e depois filtrar o tempo que chegou e o tempo limite
            indiceEstudante++;
        }

        // fazendo o primeiro da fila pegar o chá
        if (fila.length() != 0)
        {
            fila.dequeue();
            resultado.push_back(tempoAtual);
        }

        tempoAtual++;

        // tirando o da vez caso ele já tenha excedido seu limite máx de tempo
        while ((fila.length() != 0) && (matriz[fila.frontValue()][1] < tempoAtual)) // tenho que olhar sempre para o da vez
        {
            fila.dequeue();
            resultado.push_back(0); //joga o zero já que 
        }
        
    }

    for (int i = 0; i < resultado.size(); i++)
    {
        cout << resultado[i] << " ";
    }
    cout << endl;
}