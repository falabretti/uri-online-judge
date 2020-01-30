#include <iostream>
#include <stdio.h>

///using namespace std;

int main() {

    int di, hi[3];
    int df, hf[3];

    scanf("Dia %d\n", &di);
    scanf("%d : %d : %d\n", &hi[0], &hi[1], &hi[2]);
    ///setbuf(stdin, NULL);
    scanf("Dia %d\n", &df);
    scanf("%d : %d : %d", &hf[0], &hf[1], &hf[2]);

    di = df - di;
    hi[0] = hf[0] - hi[0];
    hi[1] = hf[1] - hi[1];
    hi[2] = hf[2] - hi[2];

    if(hi[2] < 0) {
        hi[2] += 60;
        hi[1]--;
    }
    if(hi[1] < 0) {
        hi[1] += 60;
        hi[0]--;
    }
    if(hi[0] < 0) {
        hi[0] += 24;
        di--;
    }

     /*cout << di << " dia(s)" << endl;
     cout << hi[0] << " hora(s)" << endl;
     cout << hi[1] << " minuto(s)" << endl;
     cout << hi[2] << " segundo(s)" << endl;*/

     printf("%d dia(s)\n", di);
     printf("%d hora(s)\n", hi[0]);
     printf("%d minuto(s)\n", hi[1]);
     printf("%d segundo(s)\n", hi[2]);

    return 0;
}
