#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> lose;
    lose.insert(make_pair("papel", "tesoura"));
    lose.insert(make_pair("tesoura", "pedra"));
    lose.insert(make_pair("pedra", "papel"));

    string dodo_s = "Os atributos dos monstros vao ser inteligencia, sabedoria...";
    string leo_s = "Iron Maiden's gonna get you, no matter how far!";
    string pepper_s = "Urano perdeu algo muito precioso...";
    string draw = "Putz vei, o Leo ta demorando muito pra jogar...";

    string s1, s2, s3;
    while (cin >> s1 >> s2 >> s3) {
        bool dodo = lose.at(s1) != s2 and lose.at(s1) != s3;
        bool leo = lose.at(s2) != s1 and lose.at(s2) != s3;
        bool pepper = lose.at(s3) != s2 and lose.at(s3) != s1;

        if (dodo and !leo and !pepper) {
            cout << dodo_s << endl;
        } else if (leo and !dodo and !pepper) {
            cout << leo_s << endl;
        } else if (pepper and !dodo and !leo) {
            cout << pepper_s << endl;
        } else {
            cout << draw << endl;
        }
    }

    return 0;
}
