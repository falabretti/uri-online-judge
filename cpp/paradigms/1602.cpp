#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	while(n--) {
		int tam;
		cin >> tam;

		int pos = tam % 2 == 0 ? tam / 2 : tam / 2 + 1;

		cout << pos << endl;
	}

	return 0;
}