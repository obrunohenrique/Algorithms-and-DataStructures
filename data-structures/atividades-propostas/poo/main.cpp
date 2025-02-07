#include <iostream>
#include <string>
#include <typeinfo>
#include "mercadoria.h"

using namespace std;

int main() {

    int cont;
    cout << "Digite a quantidade de Produtos: ";
    cin >> cont;

    Mercadoria * produtos[cont];

    string tipo;
    string nome;
    float preco;
    int quantidade;

    for(int i=0; i < cont; i++) {
        cout << "Digite o tipo do Produto: ";
        cin >> tipo;
        cout << endl;

        cout << "Digite o nome do Produto: ";
        cin >> nome;
        cout << endl;

        cout << "Digite o preco do Produto: ";
        cin >> preco;
        cout << endl;

        cout << "Digite a quantidade do Produto: ";
        cin >> quantidade;
        cout << endl;

        if(tipo=="fruta") {
            produtos[i] = new Fruta(nome, preco, quantidade);
        } else if(tipo=="verdura") {
            produtos[i] = new Verdura(nome, preco, quantidade);
        } else if(tipo=="legume") {
            produtos[i] = new Legume(nome, preco, quantidade);
        }
    }
    
    //SAÍDA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    cout<< "Valor Total do estoque de Fruta: " << endl;
    for(int i=0;i<cont;i++) {
        Fruta * daVez = dynamic_cast<Fruta*>(produtos[i]);
        if(daVez != NULL) {
            cout << produtos[i]->getNome() << ": R$" << daVez->getValorIntegral() << endl;  
        }
    }
    for(int i=0;i<cont;i++) {
        Fruta * daVez = dynamic_cast<Fruta*>(produtos[i]);
        if(daVez != NULL) {
            cout << "Desconto: R$" << daVez->getDesconto() << endl;
            cout << "Total: R$" << daVez->getTotal() << endl;
            break;  
        }
    }

    // ------------------------------------------------------------------------------------

    cout<< "Valor Total do estoque de Verdura: " << endl;
    for(int i=0;i<cont;i++) {
        Verdura * daVez = dynamic_cast<Verdura*>(produtos[i]);
        if(daVez != NULL) {
            cout << produtos[i]->getNome() << ": R$" << daVez->getValorIntegral() << endl;  
        }
    }
    for(int i=0;i<cont;i++) {
        Verdura * daVez = dynamic_cast<Verdura*>(produtos[i]);
        if(daVez != NULL) {
            cout << "Desconto: R$" << daVez->getDesconto() << endl;
            cout << "Total: R$" << daVez->getTotal() << endl;
            break;  
        }
    }

    // ------------------------------------------------------------------------------------

    cout<< "Valor Total do estoque de Legume: " << endl;
    for(int i=0;i<cont;i++) {
        Legume * daVez = dynamic_cast<Legume*>(produtos[i]);
        if(daVez != NULL) {
            cout << produtos[i]->getNome() << ": R$" << daVez->getValorIntegral() << endl;  
        }
    }
    for(int i=0;i<cont;i++) {
        Legume * daVez = dynamic_cast<Legume*>(produtos[i]);
        if(daVez != NULL) {
            cout << "Desconto: R$" << daVez->getDesconto() << endl;
            cout << "Total: R$" << daVez->getTotal() << endl;
            break;  
        }
    }
    

    return 0;
}