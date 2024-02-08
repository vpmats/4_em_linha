#include <iostream>

using namespace std;

void iniciojogo() {
    // mensagens e in/out de msgs
    // captacao de decisoes do utilizador
}

bool terminoujogo() {
    //verificar se o jogo terminou
    //alguem ganhou? //tabuleiro cheio??
}

bool tabuleirocheio() {
}

bool alguemganhou() {
}

void mostrartabuleiro() {
}

int main() {

    string nomes[2];
    
    string tabuleiro [6] [8] {
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""}    
    };

    bool tabuleiropreenchido = false;
    bool jogoterminou = false;

    cout << "\n*************** BEM VINDO AO JOGO ***************" << endl << endl;

    cout << "Nome jogador 1: ";
    cin >> nomes[0];

    cout << "Nome jogador 2: ";
    cin >> nomes[1];

    cout << "Primeiro nome: " << nomes[0] << endl;
    cout << "Segundo nome: " << nomes[1] << endl;

    do {
        iniciojogo();
    } while (!jogoterminou);

    return 0;

}


