#ifndef _BST_
#define _BST_

#include <iostream>
using namespace std;

class No
{
public:
    No * direita;
    No * esquerda;
    int valor;
    
    No(int num);
    ~No();
};

No::No(int num)
{
    valor = num;
    direita = nullptr;
    esquerda = nullptr;
}

No::~No()
{
}



class Bst
{
private:
    No * raiz;

    void inserir(int num, No * &r) {
        if(r == nullptr) {
            r = new No(num);
        } else if(r->valor < num) {
            inserir(num, r->direita);
        } else {
            inserir(num, r->esquerda);
        }
    }

    int deletar(int num, No*& r) {
        if(r == nullptr){
            return -1;
        }

        if(r->valor > num) {
            deletar(num, r->esquerda);

        } else if(r->valor < num) {
            deletar(num, r->direita);

        } else {
            if(r->direita == nullptr) {
                No* temp = r;
                r = r->esquerda;
                delete temp;
            } else if(r->esquerda == nullptr) {
                No* temp = r;
                r = r->direita;
                delete temp;
            } else {
                No*  sucessor = r->direita;
                while (sucessor->esquerda != nullptr)
                {   
                    sucessor = sucessor->esquerda;
                }
                r->valor = sucessor->valor;
                deletar(sucessor->valor, r->direita);
            }
        }

        return 0;
    }

    void preOrdem(No * r) {
        if (r != nullptr)
        {
            cout << r->valor << " ";
            preOrdem(r->esquerda);
            preOrdem(r->direita);
        }
    }

    void emOrdem(No * r) {
        if (r != nullptr)
        {
            preOrdem(r->esquerda);
            cout << r->valor << " ";
            preOrdem(r->direita);
        }
    }

    void posOrdem(No * r) {
        if (r != nullptr)
        {
            preOrdem(r->esquerda);
            preOrdem(r->direita);
            cout << r->valor << " ";
        }
    }

    int altura(No* r) {
        if(r == nullptr) {
            return -1;
        }

        int altura_direita = altura(r->direita);
        int altura_esquerda = altura(r->esquerda);
        
        int max_direita_esquerda = altura_direita;
        if(altura_esquerda > altura_direita) {
            max_direita_esquerda = altura_esquerda;
        }

        return max_direita_esquerda + 1;
    }

    int minimo(No * r) {
        if(r == nullptr) {
            return -1;
        }

        while (r->esquerda != nullptr)
        {
            r = r->esquerda;
        }
        return r->valor;
    }

    int maximo(No * r) {
        if(r == nullptr) {
            return -1;
        }

        while (r->direita != nullptr)
        {
            r = r->direita;
        }
        return r->valor;
    }

    int tamanho(No* r){
        
        if(r == nullptr) {
            return 0;
        }
        return 1 + tamanho(r->esquerda) + tamanho(r->direita);
    }

public:
    Bst(int num);
    ~Bst();

    void inserir(int num) {
        inserir(num, raiz);
    }

    int deletar(int num) {
        return deletar(num, raiz);
    }

    void preOrdem() {
        preOrdem(raiz);
    }

    void emOrdem() {
        emOrdem(raiz);
    }
    
    void posOrdem() {
        posOrdem(raiz);
    }

    int altura() {
        return altura(raiz);
    }

    int minimo() {
        return minimo(raiz);
    }

    int maximo() {
        return maximo(raiz);
    }

    int tamanho() {
        return tamanho(raiz);
    }
};

Bst::Bst(int num)
{
    raiz = new No(num);
}

Bst::~Bst()
{
}



#endif