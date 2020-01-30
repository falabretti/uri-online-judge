#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {

    //freopen("1248.in", "r", stdin);
    int n;
    cin >> n;
    cin.get();

    while(n--) {
        string dieta, cafe, almoco;
        getline(cin, dieta);
        getline(cin, cafe);
        getline(cin, almoco);

        bool cheater = false;
        int tam_cafe = cafe.size();
        int tam_almoco = almoco.size();

        for(int i = 0; i < tam_cafe; i++) {
            int pos = dieta.find(cafe[i]);

            if(pos != -1) {
                dieta.erase(pos, 1);
            } else {
                cheater = true;
                break;
            }
        }

        if(not cheater) {
            for(int i = 0; i < tam_almoco; i++) {
                int pos = dieta.find(almoco[i]);

                if(pos != -1) {
                    dieta.erase(pos, 1);
                } else {
                    cheater = true;
                    break;
                }
            }
        }

        if(cheater) {
            cout << "CHEATER" << endl;
        } else {
            int tam_dieta = dieta.size();
            char dieta_array[tam_dieta];
            strcpy(dieta_array, dieta.c_str());
            sort(dieta_array, dieta_array + tam_dieta);

            printf("%s\n", dieta_array);
        }
    }

    return 0;
}
