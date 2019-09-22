#include <bits/stdc++.h>

using namespace std;

int main() {

	int x, y;
	cin >> x >> y;

	int pos_x = x;
	int pos_y = y;

	int voltas = 1;
	int dif = pos_y - pos_x;

	while(dif < y) {
		voltas++;
		pos_x += x;
		pos_y += y;
		dif = pos_y - pos_x;
	}

	cout << voltas << endl;

	return 0;
}