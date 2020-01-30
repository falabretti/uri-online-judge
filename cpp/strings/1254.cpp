#include <bits/stdc++.h>

using namespace std;

void low(string &ptr) {
    for(int i = 0; i < ptr.size(); i++) {
        ptr[i] = tolower(ptr[i]);
    }
}

int main() {

    //freopen("1254.in", "r", stdin);
    string tag, troca, linha;

    while(cin >> tag >> troca) {
        cin.get();
        getline(cin, linha);

        int tam = tag.size();
        string linha_low = linha;
        string tag_low = tag;

        low(tag_low);
        low(linha_low);

        for(int i = 0; i < linha.size(); i++) {
            if(linha[i] == '<') {
                int fim_tag = linha.find(">", i);
                int pos;

                while((pos = linha_low.find(tag_low, i)) != -1 and (pos < fim_tag)) {
                    linha.replace(pos, tam, troca);
                    linha_low.replace(pos, tam, troca);
                    // substituir a posição do fim da tag pois
                    // o tamanho da linha muda depois do replace
                    fim_tag = linha.find(">", i);
                }
            }
        }
        cout << linha << endl;
    }

    return 0;
}
