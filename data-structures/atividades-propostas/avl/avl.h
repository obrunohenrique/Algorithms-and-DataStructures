#ifndef _AVL_
#define _AVL_

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


class Avl
{
private:
    No * raiz;

    No* inserir(int num, No * &r) {
        if(r == nullptr) {
            r = new No(num);
        } else if(num > r->valor) {
            r->direita = inserir(num, r->direita);
        } else {
            r->esquerda = inserir(num, r->esquerda);
        }

        int balanco = getBalanco(r);

        // desbalanco à direita - sub-arvore direita
        if(balanco < -1 && num >= r->direita->valor) {
            return L_rotation(r);
        } 
        if(balanco > 1 && num < r->esquerda->valor) { //desbalanco à esquerda - sub-arvore esquerda
            return R_rotation(r);
        }
        if(balanco > 1 && num >= r->esquerda->valor) { //desbalanco à esquerda - sub-arvore direita
            r->esquerda = L_rotation(r->esquerda);
            return R_rotation(r);
        } 
        if(balanco < -1 && num < r->direita->valor) {// desbalanco à direita - sub-arvore esquerda
            r->direita = R_rotation(r->direita);
            return L_rotation(r);
        }

        return r;
        
    }

    No* deletar(int num, No*& r) {
        if(r == nullptr){
            return r;
        }

        if(r->valor > num) {
            r->esquerda = deletar(num, r->esquerda);

        } else if(r->valor < num) {
            r->direita = deletar(num, r->direita);

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
                delete(sucessor->valor, r->direita);
            }
        }

        int balanco = getBalanco(r);

        // desbalanco à direita - sub-arvore direita
        if(balanco < -1 && getBalanco(r->direita) <= 0) {
            return L_rotation(r);
        } 
        if(balanco > 1 && getBalanco(r->esquerda) >= 0) { //desbalanco à esquerda - sub-arvore esquerda
            return R_rotation(r);
        }
        if(balanco > 1 && getBalanco(r->esquerda) == -1) { //desbalanco à esquerda - sub-arvore direita
            r->esquerda = L_rotation(r->esquerda);
            return R_rotation(r);
        } 
        if(balanco < -1 && getBalanco(r->direita) == 1) {// desbalanco à direita - sub-arvore esquerda
            r->direita = R_rotation(r->direita);
            return L_rotation(r);
        }

        return r;
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
            emOrdem(r->esquerda);
            cout << r->valor << " ";
            emOrdem(r->direita);
        }
    }

    void posOrdem(No * r) {
        if (r != nullptr)
        {
            posOrdem(r->esquerda);
            posOrdem(r->direita);
            cout << r->valor << " ";
        }
    }

    No* R_rotation(No * rt) {
        No * l = rt->esquerda;
        No* lr = l->direita;

        l->direita = rt;
        rt->esquerda = lr;
        
        return l;
    }

    No* L_rotation(No * rt) {
        No * r = rt->direita;
        No * rl = r->esquerda;

        r->esquerda = rt;
        rt->direita = rl;

        return r;
    }

    int getBalanco(No * r) {
        if(r == NULL){
            return 0;
        } 

        return altura(r->esquerda) - altura(r->direita);
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
    Avl();
    ~Avl();

    void inserir(int num) {
        raiz = inserir(num, raiz); 
    }

    void deletar(int num) {
        deletar(num, raiz);
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

Avl::Avl()
{
    raiz = nullptr;
}

Avl::~Avl()
{
}



#endif