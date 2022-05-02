#include <string.h>
#include <iostream>

/*para doar sangue e necessario ter entre 18 e 67 anos.faça
   * um aplicativo que pergunte a idade de uma pessoa e diga se
   * pode doar sangue ou nao*/;

using namespace std;

// variaveis

int idade;

// calculo;

int main()
{
    do {
        cout << "\nDiga sua idade: ";
        cin >> idade;

        if (idade >= 18 && idade <= 67)
        {
            cout << "\n voce esta apto a doar sangue!";
        }
        else
        {
            cout << "\n voce nao esta apto a doar sangue!";
        }
    } while(idade < 18 || idade > 67);
}
