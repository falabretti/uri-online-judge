#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string p1, p2, p3;
    cin >> p1 >> p2 >> p3;

    if (p1 == "vertebrado") {
        if (p2 == "ave") {
            if (p3 == "carnivoro") {
                cout << "aguia" << endl;
            }
            if (p3 == "onivoro") {
                cout << "pomba" << endl;
            }
        }
        if (p2 == "mamifero") {
            if (p3 == "onivoro") {
                cout << "homem" << endl;
            }
            if (p3 == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    }
    if (p1 == "invertebrado") {
        if (p2 == "inseto") {
            if (p3 == "hematofago") {
                cout << "pulga" << endl;
            }
            if (p3 == "herbivoro") {
                cout << "lagarta" << endl;
            }
        }
        if (p2 == "anelideo") {
            if (p3 == "hematofago") {
                cout << "sanguessuga" << endl;
            }
            if (p3 == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }


    return 0;
}
