#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    int a, b, c, d;

    scanf("%d.%d.%d-%d", &a, &b, &c, &d);

    printf("%03d\n%03d\n%03d\n%02d\n", a, b, c, d);

    return 0;
}
