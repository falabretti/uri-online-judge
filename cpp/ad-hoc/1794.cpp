#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	int la, lb, sa, sb;
	cin >> la >> lb >> sa >> sb;

	if(n >= la and n <= lb and n >= sa and n <= sb) {
		cout << "possivel" << endl;
	}
	else {
		cout << "impossivel" << endl;
	}

	return 0;
}