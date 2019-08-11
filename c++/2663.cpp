#include <iostream>
#include <algorithm>

using namespace std;

bool ordem (int i, int j) {
    return i > j;
}

int main() {

    int n, classificados, quantidade = 0;

    cin >> n >> classificados;

    int pontos[n];

    for(int i = 0; i < n; i++) {
        cin >> pontos[i];
    }

    sort(pontos, pontos+n, ordem);

    for(int i = 0; i < n; i++) {
        quantidade++;
        if(quantidade >= classificados) {
            if(pontos[i] != pontos[i+1]) {
                break;
            }
        }
    }

    cout << quantidade << endl;

    return 0;
}
