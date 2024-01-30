#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

        int npilhas = 3, nelementos = 10;
        string pilha [3][10] = {
        { "", "", "", "", "", "", "", "", "", "",},
        { "", "", "", "", "", "", "", "", "", "",},
        { "", "", "", "", "", "", "", "", "", "",},
    };

    void mostrapilha() {

        cout << "\n*** A MINHA PILHA ***" << endl << endl;

        for (int y = nelementos-1; y>=0; y--) {
            for (int x = 0; x<npilhas; x++) {
                if (x>0) cout << " | ";
                if (pilha[x][y] != "") {
                    cout << pilha[x][y];
                } else {
                    cout <<" ";
                }
        }
        cout << endl;
    }
    cout << "_________" << endl;
    for (int x=0; x<npilhas; x++) {
        if (x>0) cout << " | ";
        cout << x;
    }
}

    void  pedirelemento () {

        int qualpilha;
        string elemento;
        bool encontroulivre = false;

        cout <<"Em que pilha quer colocar o elemento ? (0 / 1 / 2) : ";
        cin >> qualpilha;

        cout << "\nQual o elemento a colocar na pilha [" << qualpilha << "] : ";
        cin >> elemento;

        for (int i=0; i<nelementos; i++) {
            if (pilha[qualpilha] [i] == "") {
                pilha[qualpilha] [i] == elemento;
                encontroulivre = true;
                break;
                mostrapilha ();
        }
    }
    if (!encontroulivre) {
        cout << "\n\nA pilha[" << qualpilha << "] nao tem posicoes livres";
    }
}
    int main() {

        int op = 0;

        do {
            cout << "\n_____________________________" << endl << endl;
            cout << "\n*** 3 PILHAS ARRAY 2 DIMENSOES ***" << endl << endl;
            cout << "O que pretende fazer ?\n";
            cout << "1 - inserir elemento em pilha\n";
            cout << "2 - mostrar pilha \n";
            cout << "0 - Sair\n";
            cin >> op;

            switch (op) {
                case 1:
                    pedirelemento ();
                    break;
                case 2:
                    mostrapilha();
                    break;
                default: break;
            }
        } while (op !=0);


        return 0;

}


