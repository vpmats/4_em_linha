#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

    int posicao = 0;
    string pilha [6];

void push() {

    if (posicao < 6) {
        cout << "\n ** Numero a inserir na pilha : ";
        cin >> pilha[posicao];
        posicao ++;
    } else {
        cout << "\n ** NAO TEM POSICOES LIVRE NA PILHA, RETIRE PARA METER ** ";
    }
}

void pop() {

    if (posicao > 0) {
        cout << "\n ** Retirou o Elemento da pilha: ";
        cout << pilha[posicao - 1] << endl << endl;
        posicao --;
    } else {
        cout << "\n ** NAO TEM ELEMENTOS NA PILHA ** \n\n";
    }
}


void top() {

    if (posicao > 0) {
        cout << "TOP = " <<pilha[posicao - 1] << endl;
    } else {
        cout << "\n **NAO TEM ELEMENTOS NA PILHA** \n\n";
    }
}


void allpilha() {
    for (int i = 0; i < posicao; i++) {
        cout << "Pilha [" << i << "] =" << pilha[i] << endl;
    }
}


int main() {

    int op, continua = true;


    do {
        printf("O que pretende fazer? \n");
        printf("\n1 - push (adicionar algo na pilha) \n");
        printf("2 - pop (retirar algo na pilha) \n");
        printf("3 - top (ver topo da pilha) \n");
        printf("4 - ver a pilha inteira \n______________________________________________________________");
        printf("\n\n5 - Fechar \n______________________________________________________________\n");

        printf("R: ");
        scanf("%d", &op);



        switch (op) {
            case 1:
                push();
                break;



        switch (op)
            case 2:
                pop();
                break;


        switch (op)
            case 3:
                top();
                break;



        switch (op)
            case 4:
                allpilha();
                break;


        switch (op)
        case 5:
            continua = false;
                break;

        default:
                continua = false;
                break;
        }

    }
     while (continua);



    return 0;

}


