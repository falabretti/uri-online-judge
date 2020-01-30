#include <iostream>

using namespace std;

int main() {

    int tam, n1, n2;
    char op;

    cin >> tam >> n1 >> op >> n2;

    int total;

    if(op == '*') total = n1 * n2;
    if(op == '+') total = n1 + n2;

    string saida;

    if(total > tam) saida = "OVERFLOW";
    else saida = "OK";

    cout << saida << endl;

    return 0;
}
