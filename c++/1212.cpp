#include <bits/stdc++.h>

using namespace std;

int carryCalculator(string& n1, string& n2) {
    int qnt = 0;

    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    int limite = min(n1.size(), n2.size());
    int sobra = 0;

    for(int i = 0; i < limite; i++) {
        int v1 = n1[i] - '0';
        int v2 = n2[i] - '0';
        int soma = v1 + v2 + sobra;

        if(soma > 9) {
            sobra = soma / 10;
            qnt++;
        }
        else {
            sobra = 0;
        }
    }

    string maior;

    if(n1.size() > n2.size())
        maior = n1;
    else
        maior = n2;

    for(int i = limite; i < maior.size(); i++) {
        int v = maior[i] - '0';
        int soma = sobra + v;

        if(soma > 9) {
            sobra = soma / 10;
            qnt++;
        }
        else {
            sobra = 0;
        }
    }

    return qnt;
}

int main() {

    //freopen("entrada.in", "r", stdin);
    string n1, n2;

    while(cin >> n1 >> n2) {

        if(n1 == "0" and n2 == "0")
            break;

        int qnt = carryCalculator(n1, n2);

        if(qnt == 0)
            cout << "No carry operation." << endl;
        else if(qnt == 1)
            cout << "1 carry operation." << endl;
        else
            cout << qnt << " carry operations." << endl;
    }

    return 0;
}
