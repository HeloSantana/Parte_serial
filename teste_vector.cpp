#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <vector>

using namespace std;
vector <vector <int> > matriz;

int main()
{
    setlocale(LC_ALL, "");

    int linha = 100, col = 100, matrix=0;
    int div, cont;
    time_t tInicial, tFinal;
    double tempo;

    srand(100);

    tInicial = time(0);
    for (int i = 0; i < linha; i++){
            vector <int> coluna;
            matriz.push_back(coluna);
        for (int j = 0; j < col; j++){
            matriz[i].push_back(rand()%9);
            cout << matriz[i][j] << "  ";
        }
    }
    tFinal = time(0);

    tempo = difftime(tFinal, tInicial);
    cout << endl << "tempo: " << tempo << endl;

    cont = 0;
    for (int i = 0; i < linha; i++){
        for (int j = 0; j < col; j++){
            div = 0;
            matrix = matriz[i][j];
            for (int c = 1; c <= matrix; c++){
                if(matrix%c == 0){
                    div++;
                }
            }
            if(div == 2){
                cont++;
            }
        }
    }

    cout <<"Quantidade de numeros primos: "<< cont <<endl;

    return 0;
}
