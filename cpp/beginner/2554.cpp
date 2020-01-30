#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main() {

    //freopen("2554.in", "r", stdin);
    int n, d;

    while(cin >> n >> d) {

        string datas[d], datasPossiveis;
        int pessoas[n], total = 0, iDatas = 0, diasPossiveis = 0;

        for(int i = 0; i < d; i++) {
            cin >> datas[i];

            for(int j = 0; j < n; j++) {
                cin >> pessoas[j];

                    if(pessoas[j] == 1) {
                        total++;
                    }
            }
            if(total == n and diasPossiveis == 0) {
                datasPossiveis = datas[i];
                diasPossiveis++;
            }
            total = 0;
        }

        if(diasPossiveis == 0) {
            cout << "Pizza antes de FdI" << endl;
            iDatas = 0;
        } else {
           //sort(datasPossiveis, datasPossiveis+(iDatas+1));
           iDatas = 0;
           cout << datasPossiveis << endl;
        }
    }

    return 0;
}
