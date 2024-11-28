#include <iostream>

using namespace std;

int main() {

  string nome1, nome2;

  cout << "Digite o primeiro nome: ";
  cin >> nome1;
  cout << "\n";

  cout << "Digite o segundo nome: ";
  cin >> nome2;
  cout << "\n";

  int tam1, tam2;
  tam1 = nome1.length();
  tam2 = nome2.length();

  for(int i=0; i<tam1; i++){
    nome1[i] = tolower(nome1[i]);
  }
  for(int i=0; i<tam2; i++){
    nome2[i] = tolower(nome2[i]);
  }

  if(nome1 > nome2) {
    cout << nome2 << endl;
    cout << nome1 << endl;
  } else {
    cout << nome1 << endl;
    cout << nome2 << endl;
  }
  
  return 0;
}