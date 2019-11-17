#include <bits/stdc++.h>

using namespace std;

struct Value {
    int pos;
    int qnt;
};

int main() {

    string linha;
    bool first = true;
    
    while(cin >> linha) {
        
        if(first) first = false;
        else cout << endl;
        
        int cont[256];
        memset(cont, 0, sizeof(cont));

        for(char letra : linha) {
            cont[int(letra)]++;
        }

        vector<Value> lista;

        for(int i = 0; i < 256; i++) {
            if(cont[i] > 0) lista.push_back({i, cont[i]});
        }

        sort(lista.begin(), lista.end(), [](Value a, Value b) {

            if(a.qnt == b.qnt) return a.pos > b.pos;        
            return a.qnt < b.qnt;
        });

        for(Value v: lista) {
            cout << v.pos << ' ' << v.qnt << endl;
        }
    }

    return 0;
}