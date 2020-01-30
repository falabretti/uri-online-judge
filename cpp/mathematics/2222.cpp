#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int binarySearch(vector<int>& vec, int min, int max, int target) {
    if(max >= min) {
        int mid = min + (max - min) / 2;

        if(target == vec[mid]) return mid;

        if(target < vec[mid]) {
            return binarySearch(vec, min, mid - 1, target);
        }

        return binarySearch(vec, mid + 1, max, target);
    }

    return -1;
}

int main() {

    //freopen("entrada.in", "r", stdin);
    int n;
    scanf("%d\n", &n);

    while(n--) {
        int qnt_conjuntos;
        scanf("%d\n", &qnt_conjuntos);

        vector<int> conjuntos[qnt_conjuntos];

        for(int i = 0; i < qnt_conjuntos; i++) {
            int tam;
            scanf("%d\n", &tam);

            vector<int> vec;
            vec.reserve(tam);

            for(int j = 0; j < tam; j++) {
                int v;
                scanf("%d", &v);
                vec.push_back(v);
            }

            conjuntos[i] = vec;
        }

        int qnt_op;
        scanf("%d\n", &qnt_op);

        for(int i = 0; i < qnt_op; i++) {
            int op, c1, c2;
            scanf("%d %d %d\n", &op, &c1, &c2);
            c1--;
            c2--;

            vector<int>* ptr1 = &conjuntos[c1];
            vector<int>* ptr2 = &conjuntos[c2];

            if((*ptr2).size() < (*ptr1).size()) {
                vector<int>* temp = ptr1;
                ptr1 = ptr2;
                ptr2 = temp;
            }

            vector<int>& v1 = *ptr1;
            vector<int>& v2 = *ptr2;

            sort(v1.begin(), v1.end());

            if(op == 1) {
                vector<int> I;
                I.reserve(v1.size() + v2.size());

                for(int j = 0; j < v2.size(); j++) {
                    if(binarySearch(v1, 0, v1.size() - 1, v2[j]) != -1) {
                            I.push_back(v2[j]);
                    }
                }

                set<int> s(I.begin(), I.end());
                printf("%d\n", s.size());
            }
            else {
                vector<int> U;
                U.reserve(v1.size() + v2.size());

                for(int j = 0; j < v1.size(); j++) {
                        U.push_back(v1[j]);
                }

                for(int j = 0; j < v2.size(); j++) {
                    if(binarySearch(v1, 0, v1.size() - 1, v2[j]) == -1) {
                            U.push_back(v2[j]);
                    }
                }

                set<int> s(U.begin(), U.end());
                printf("%d\n", s.size());

                U.
            }
        }
    }

    return 0;
}
