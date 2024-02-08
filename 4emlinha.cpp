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
    
    string tabuleiro [6[8] {
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""},
    { "", "", "", "", "", "", "", ""}    
    };

    bool tabuleiropreenchido = false;
    bool jogoterminou = false;

    cout << "\n*************** BEM VINDO AO JOGO ***************" << endl;

    do {
        iniciojogo();
    } while (!jogoterminou);

    return 0;

}


