#include <iostream>

using namespace std;

void iniciojogo() {
    // mensagens e in/out de msgs
    // captacao de decisoes do utilizador
}

bool terminoujogo() {
    //verificar se o jogo terminou
    //alguem ganhou? //tabuleiro cheio??
    
    if (tabuleirocheio = true) {
        terminoujogo = true;
        cout << "Jogo terminado por nao sobrar espaco no tabuleiro" << endl;
        
    } else if (alguemganhou = true) {
        terminoujogo = true;
        cout << "Jogo terminado por vitoria de um jogador" << endl;
    }
}

bool tabuleirocheio() {
    if (tabuleirocheio = true) {
        
    }
}

bool alguemganhou() {
    if (alguemganhou = true) {
        tabuleirocheio = true;
    }
}

void mostrartabuleiro() {
}

int main() {
    
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

    cout << "\n*************** BEM VINDO AO JOGO ***************" << endl;

    do {
        iniciojogo();
    } while (!jogoterminou);

    return 0;

}


