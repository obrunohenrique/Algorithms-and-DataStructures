#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "hash.h"

using namespace std;

int main() {
    ifstream arquivo("genome.txt"); // Abre o arquivo para leitura

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    ofstream result("result.txt"); // Cria um arquivo de saída

    if (!result) {
        cout << "Erro ao criar o arquivo de saída!" << endl;
        return 1;
    }

    int linhasTotais = 0;
    string linhaTemporaria;

    // Conta o número de linhas
    while (getline(arquivo, linhaTemporaria))
        linhasTotais++;

    // Reseta o ponteiro do arquivo para o início
    arquivo.clear();        // Limpa o estado de EOF
    arquivo.seekg(0);       // Move o ponteiro para o início

    TabelaHash tabelaGenomas(linhasTotais * 2 * 6);
    vector<string> filaGenomas;
    string linha;

    // Processa cada linha do arquivo
    while (getline(arquivo, linha)) {
        int tamanhoLinha = linha.size();
        string blocoSeis;

        for (int i = 0; i < tamanhoLinha; ++i) {
            blocoSeis += linha[i];

            // A cada 6 caracteres, registra o bloco
            if ((i + 1) % 6 == 0) {
                tabelaGenomas.inserir(blocoSeis);

                if (tabelaGenomas.buscar(blocoSeis) == 1)
                    filaGenomas.push_back(blocoSeis);

                blocoSeis = ""; // Limpa para o próximo bloco
            }
        }
    }

    // Escreve os genomas e suas contagens no arquivo
    while (!filaGenomas.empty()) {
        string genoma = filaGenomas.front();
        filaGenomas.erase(filaGenomas.begin());

        result << "Genoma: " << genoma
               << " | Repetidos: " << tabelaGenomas.buscar(genoma) << endl;
    }

    arquivo.close(); // Fecha o arquivo de entrada
    result.close();  // Fecha o arquivo de saída

    cout << "Resultados salvos em 'result.txt'" << endl;
    return 0;
}
