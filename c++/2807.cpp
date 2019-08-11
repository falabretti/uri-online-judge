#include <iostream>
#include <algorithm>

using namespace std;

bool ordem (int i, int j) { return i > j; }

int main() {

    int n, anterior, atual;

    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++) {
        if(i == 0 or i == 1) {
            vetor[i] = 1;
            anterior = 1;
            atual = 1;
        } else {
            vetor[i] = anterior + atual;
            anterior = atual;
            atual = vetor[i];
        }
    }

    sort(vetor, vetor + n, ordem);

    for(int i = 0; i < n; i++) {
        cout << vetor[i];
        if(i < n - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
