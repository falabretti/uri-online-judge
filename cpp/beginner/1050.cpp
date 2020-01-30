#include <iostream>

using namespace std;

int main()
{

    int ddd;
    cin >> ddd;

    if (ddd == 61 || ddd == 71 || ddd == 11 || ddd == 21 || ddd == 32 || ddd == 19 || ddd == 27 || ddd == 31)
    {
        switch (ddd)
        {
        case 61:
            cout << "Brasilia" << endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
            break;
        }
    }
    else
    {
        cout << "DDD nao cadastrado" << endl;
    }



    return 0;
}
