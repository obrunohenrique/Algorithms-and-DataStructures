#include <iostream>
using namespace std;

class HashTable
{
private:
    int num_indices;
    int maxSize;
    string * tabela;
    int h(string chave);

public:
    HashTable();
    ~HashTable();

    void inicializarTabela();
    void print();
    int hash(string chave);
    void inserir(string valor);
    int busca(string valor);
    void excluir(string valor);
};

HashTable::HashTable()
{
    maxSize = 101;
    tabela = new string[maxSize];
    num_indices = 0;
}

HashTable::~HashTable()
{
    delete[] tabela;
}

void HashTable::inicializarTabela() {
    int i;
    for(i=0; i < maxSize; i++)
        tabela[i] = "";
}

void HashTable::print() {
    cout << num_indices << endl;
    for(int i =0; i < maxSize; i++){
        if(tabela[i] != "")
            cout << i << ":" << tabela[i] << endl;
    }
}

int HashTable::h(string chave) {
    int cont = 1, soma=0;
    for(char c : chave) {
        int ascii = static_cast<int>(c);
        soma += ascii * cont;
        cont++;
    }

    return 19 * soma;
}

int HashTable::hash(string chave) {
    return h(chave) % 101;
}

void HashTable::inserir(string valor) {
    int id = hash(valor), j=1;

    if(busca(valor) != -1) {
        return;
    }

    if(tabela[id] == "" ) {
        tabela[id] = valor;
        ++num_indices;
    }
    else {
        int newID = hash(valor) + j*j + 23*j;
        while (j<20 && tabela[newID] != "")
        {
            j++;
            int newID = hash(valor) + j*j + 23 + j;
        }

        if(tabela[newID] == "") {
            tabela[newID] = valor;
            ++num_indices;
        } 

    }
}

int HashTable::busca(string valor) {
    int id = hash(valor), j=1;

    if(tabela[id] == valor)
        return id;
    else {
        
        int newID = hash(valor) + j*j + 23 + j;
        while (j<20 && tabela[newID] != valor)
        {
            j++;
            int newID = hash(valor) + j*j + 23 + j;
        }

        if(tabela[newID] == valor) {
            return newID;
        }
    }

    return -1;
}

void HashTable::excluir(string valor) {
    int b = busca(valor);
    if(b != -1) {
        tabela[b] = "";
        num_indices--;
    }
       
}

int main() {

    int num_testscases, inputs;
    string input;

    cin >> num_testscases;
 
    for(int i = 0; i<num_testscases; i++) {
        cin >> inputs;

        HashTable ht;
        ht.inicializarTabela();

        for(int j =0; j<inputs; j++) {
            cin >> input;
            string palavra = input.substr(4);
            if(input[0] == 'A') {
                ht.inserir(palavra);
            } else {
                ht.excluir(palavra);
            }
        }

        ht.print();
    }
    

    return 0;
}