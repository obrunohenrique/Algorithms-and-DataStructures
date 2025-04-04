#ifndef TABELA_HASH_H
#define TABELA_HASH_H

#include <string>
#include <iostream>
using namespace std;

class TabelaHash {
private:
    int capacidade;
    string* chaves;
    int* valores;

    // Função hash com tratamento de colisões (sondagem linear)
    int calcularHash(const string& elemento, int tentativa = 0) {
        unsigned long hash = 5381;

        for (char caractere : elemento) {
            hash = ((hash << 5) + hash) + caractere; // hash * 33 + caractere
        }

        hash = (hash + tentativa) % capacidade;
        if (hash < 0) hash += capacidade;

        if (chaves[hash] == "" || chaves[hash] == elemento)
            return hash;

        return calcularHash(elemento, tentativa + 1);
    }

    // Função hash específica para buscas
    int calcularHashBusca(const string& elemento, int tentativa = 0) {
        unsigned long hash = 5381;

        for (char caractere : elemento) {
            hash = ((hash << 5) + hash) + caractere;
        }

        hash = (hash + tentativa) % capacidade;
        if (hash < 0) hash += capacidade;

        if (chaves[hash] == elemento)
            return hash;

        return calcularHashBusca(elemento, tentativa + 1);
    }

public:
    // Construtor
    TabelaHash(int tamanhoMaximo) {
        capacidade = tamanhoMaximo;
        chaves = new string[capacidade];
        valores = new int[capacidade];

        for (int i = 0; i < capacidade; ++i) {
            chaves[i] = "";
            valores[i] = 0;
        }
    }

    // Destrutor
    ~TabelaHash() {
        delete[] chaves;
        delete[] valores;
    }

    // Insere ou incrementa o valor associado à chave
    void inserir(const string& elemento) {
        int indice = calcularHash(elemento);
        if (indice != -1) {
            chaves[indice] = elemento;
            valores[indice]++;
        }
    }

    // Remove a chave da tabela
    void remover(const string& chaveAlvo) {
        int indice = buscar(chaveAlvo);
        if (indice != -1) {
            chaves[indice] = "";
            valores[indice] = 0;
        }
    }

    // Retorna o valor associado a uma chave
    int buscar(const string& elemento) {
        int indice = calcularHashBusca(elemento);
        return valores[indice];
    }
};

#endif // TABELA_HASH_H
