#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {

  long sec;
  time(&sec);
  srand((unsigned)sec);

  char repetir = 'y';
  
  cout << "O número secreto está entre 0 e 15.\n";

  while((repetir == 'y') || (repetir == 'Y')){

    int secreto = rand() % 15;
    int chances=3, chute;
    bool acerto = false;

    while(chances > 0 && acerto == false) {
      cout << "\nVocê ainda tem " << chances << " chances" << endl;

      cout << "\nTente adivinhar o número secreto: ";
    cin >> chute;

      cout << "\n\n";

      if(chute > secreto) {
        if(chances > 1) {
          cout << "O número secreto é menor que " << chute << endl;
        }
        chances -= 1;
      } else if(chute < secreto) {
        cout << "O número secreto é maior que " << chute << endl;
        chances -= 1;
      } else {
        cout << "Parabéns, você acertou o número secreto!" << endl;
        acerto = true;
      }
    }

    if (chances > 0) {
      cout << "\nVocê ganhou o jogo!" << endl;
    } else {
      cout << "O número secreto era: " << secreto << endl;
      cout << "\nQue pena, não foi dessa vez." << endl;
    }

    cout << "\nDeseja jogar novamente? [y/n]: ";
    cin >> repetir;
    cout << "\n\n";
  }
  
  cout << "<<<VOLTE SEMPRE>>>";

  
  return 0;
}