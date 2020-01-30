#include <iostream>

using namespace std;

int main() {
    int n, pc, ic, par[5], impar[5];
    pc = 0;
    ic = 0;

    for(int i = 1; i <= 15; i++) {
        cin >> n;
        if(n % 2 == 0) {
            par[pc] = n;
            if(pc <= 4) {
                pc++;
            }
        }
        if(n % 2 != 0) {
            impar[ic] = n;
            if(ic <= 4) {
                ic++;
            }
        }
        if(pc > 4) {
            for(int ap = 0; ap <= 4; ap++) {
                cout << "par[" << ap << "] = " << par[ap] << endl;
            }
            pc = 0;
        }
        if(ic > 4) {
            for(int ai = 0; ai <= 4; ai++) {
                cout << "impar[" << ai << "] = " << impar[ai] << endl;
            }
            ic = 0;
        }
    }

    for(int ui = 0; ui < ic; ui ++) {
        cout << "impar[" << ui << "] = " << impar[ui] << endl;
    }

    for(int up = 0; up < pc; up ++) {
        cout << "par[" << up << "] = " << par[up] << endl;
    }
    return 0;
}
