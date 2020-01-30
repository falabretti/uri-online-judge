#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <iterator>

using namespace std;

struct Presente {
    int id, vol;

    Presente(int p_id, int p_vol) {
        id = p_id;
        vol = p_vol;
    }
};

bool sortIdVolume(Presente p1, Presente p2) {
    return (p1.vol > p2.vol) or (p1.vol == p2.vol and p1.id < p2.id);
}

bool sortId(Presente p1, Presente p2) {
    return p1.id < p2.id;
}

int main() {

    //freopen("entrada.in", "r", stdin);

    int t;
    scanf("%d\n", &t);

    while(t--) {
        int qnt_pres, qnt_bruno;
        scanf("%d %d\n", &qnt_pres, &qnt_bruno);

        vector<Presente> vols;

        for(int i = 0; i < qnt_pres; i++) {
            int id, a, l, c;
            scanf("%d %d %d %d\n", &id, &a, &l, &c);

            int v = a * l * c;

            Presente presente(id, v);
            vols.push_back(presente);
        }

        sort(vols.begin(), vols.end(), sortIdVolume);
        sort(vols.begin(), vols.begin() + qnt_bruno, sortId);

        for(int i = 0; i < qnt_bruno; i++) {
            printf("%d", vols[i].id);

            if(i == qnt_bruno - 1) printf("\n");
            else printf(" ");
        }
    }

    return 0;
}
