#include <bits/stdc++.h>
using namespace std;

vector<int> prime;

void sieve(int n) {
    bool primes[n + 1];
    memset(primes, true, sizeof(primes));

    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++) {
        if (primes[i]) {
            prime.push_back(i);
        }
    }
}

int josephus(int n) {
    int res = 0;
    for (int i = 2, k = 0; i <= n; i++, k++) {
        int p = prime[n - 2 - k];
        res = (res + p) % i;
    }

    return res + 1;
}

int main() {
    sieve(32650);

    int n;
    while(cin >> n and n != 0) {
        int res = josephus(n);
        cout << res << endl;
    }

    return 0;
}