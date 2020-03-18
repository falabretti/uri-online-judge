#include <iostream>
#include <cstring>

using namespace std;

int main() {

    string entrada;
    int cent;


    while(cin >> entrada >> cent) {

        int tam = entrada.size();
        char entrada_array[tam];
        strcpy(entrada_array, entrada.c_str());
        int virgula;

        if(tam % 3 == 0) {
            virgula = 0;

            cout << '$';
            for(int i = 0; i < tam; i++) {
                cout << entrada_array[i];
                virgula++;
                if(virgula == 3 and i != tam - 1) {
                    cout << ',';
                    virgula = 0;
                }
            }
            cout << '.';
            printf("%02d\n", cent);

        } else {
            if((tam + 1) % 3 == 0) {
                virgula = 1;

                cout << '$';
                for(int i = 0; i < tam; i++) {
                    cout << entrada_array[i];
                    virgula++;
                    if(virgula == 3 and i != tam - 1) {
                        cout << ',';
                        virgula = 0;
                    }
                }
                cout << '.';
                printf("%02d\n", cent);


            } else {
                virgula = 2;

                cout << '$';
                for(int i = 0; i < tam; i++) {
                    cout << entrada_array[i];
                    virgula++;
                    if(virgula == 3 and i != tam - 1) {
                        cout << ',';
                        virgula = 0;
                    }
                }
                cout << '.';
                printf("%02d\n", cent);

            }
        }
    }

    return 0;
}
