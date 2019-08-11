#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {

    cout << fixed << setprecision(2);
    int n;
    double dificuldade, notas[7], total = 0;
    string nome;

    cin >> n;

    while(n--) {
        cin >> nome;
        cin >> dificuldade;
        for(int i = 0; i < 7; i++) {
            cin >> notas[i];
        }
        sort(notas, notas + 7);

        for(int j = 1; j < 6; j++) {
            total += notas[j];
        }

        cout << nome << ' ' << total * dificuldade << endl;
        total = 0;
    }

    return 0;
}
