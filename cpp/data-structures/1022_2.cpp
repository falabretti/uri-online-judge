#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m) {
    if (m == 0) return n;
    return gcd(m, n % m);
}

struct rat {
    int n;
    int d;

    rat operator+(rat a) {
        int num = n * a.d + d * a.n;
        int den = d * a.d;
        return {num, den};
    }

    rat operator-(rat a) {
        int num = n * a.d - d * a.n;
        int den = d * a.d;
        return {num, den};
    }

    rat operator*(rat a) {
        int num = n * a.n;
        int den = d * a.d;
        return {num, den};
    }

    rat operator/(rat a) {
        int num = n * a.d;
        int den = d * a.n;
        return {num, den};
    }

    void simplyfy() {
        bool neg = false;
        if (n < 0) {
            n = -n;
            neg = true;
        }

        int md = gcd(n, d);
        n /= md;
        d /= md;

        if (neg) n = -n;
    }

    friend ostream &operator<<(ostream &os, rat &r) {
        os << r.n << "/" << r.d;
        return os;
    }
};

rat calc(rat &a, rat &b, char op) {
    switch (op) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return a + b;
    }
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        struct rat n1, n2;
        char op;

        scanf("%d / %d %c %d / %d", &n1.n, &n1.d, &op, &n2.n, &n2.d);

        rat res = calc(n1, n2, op);
        cout << res << " = ";

        res.simplyfy();
        cout << res << endl;
    }

    return 0;
}
