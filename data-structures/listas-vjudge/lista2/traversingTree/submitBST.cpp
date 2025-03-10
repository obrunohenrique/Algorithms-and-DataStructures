#include <iostream>
using namespace std;

class NoArvore
{
public:
    int valor;
    NoArvore * esquerda = nullptr;
    NoArvore * direita = nullptr;

    NoArvore(int num);
    ~NoArvore();
};

NoArvore::NoArvore(int num)
{
    valor = num;
}

NoArvore::~NoArvore()
{
}

class Arvore
{
private:
    NoArvore * raiz = nullptr;

    NoArvore* inserir_recurssao(NoArvore* no, int num) {
        if(no == nullptr) {
            return new NoArvore(num);
        }
        if(num < no->valor) {
            no->esquerda = inserir_recurssao(no->esquerda, num);
        } else {
            no->direita = inserir_recurssao(no->direita, num);
        }

        return no;
    } 

public:
    Arvore();
    ~Arvore();
    void inserir(int num);
    void emOrdem(NoArvore* no);
    void preOrdem(NoArvore* no);
    void posOrdem(NoArvore* no);
    void print();
};

Arvore::Arvore()
{
}

Arvore::~Arvore()
{
}
 
void Arvore::inserir(int num) {
    raiz = inserir_recurssao(raiz, num);
}

void Arvore::emOrdem(NoArvore* no) {
    if(no != nullptr) {
        emOrdem(no->esquerda);
        cout << no->valor << " ";
        emOrdem(no->direita);
    }
}

void Arvore::preOrdem(NoArvore* no) {
    if(no != nullptr) {
        cout << no->valor << " ";
        preOrdem(no->esquerda);
        preOrdem(no->direita);
    }
}

void Arvore::posOrdem(NoArvore* no) {
    if(no != nullptr) {
        posOrdem(no->esquerda);
        posOrdem(no->direita);
        cout << no->valor << " ";
    }
}

void Arvore::print() {
    cout << "Pre order : ";
    preOrdem(raiz);
    cout << endl;
    cout << "In order  : ";
    emOrdem(raiz);
    cout << endl;
    cout << "Post order: ";
    posOrdem(raiz);
    cout << endl;
}

int main() {

    int n, input;
    Arvore arv;

    cin >> n;

    for(int i =0; i<n; i++) {
        cin >> input;
        arv.inserir(input);
    }

    arv.print();

    return 0;
}