#include <bits/stdc++.h> 

#define X first
#define Y second

using namespace std;

pair<int, int> get_nova_direcao(pair<int, int> parada, pair<int, int> pos) {

	pair<int, int> direcao = {0, 0};

	if(parada.X > pos.X) direcao = {1, 0};	
	if(parada.X < pos.X) direcao = {-1, 0};	
	if(parada.Y > pos.Y) direcao = {0, 1};	
	if(parada.Y < pos.Y) direcao = {0, -1};

	return direcao;	
}

bool rota_segura(pair<int, int> pos_masetto,
	pair<int, int> pos_giovanni,
	vector<pair<int, int>>& paradas_masetto,
	vector<pair<int, int>>& paradas_giovanni,
	int qnt_mov_masetto,
	int qnt_mov_giovanni) {

	int prox_parada_masetto = 0;
	int prox_parada_giovanni = 0;

	for(int i = 0; i < qnt_mov_giovanni; i++) {

		cout << pos_masetto.X << " " << pos_masetto.Y << endl;
		cout << pos_giovanni.X << " " << pos_giovanni.Y << endl;
		cout << endl;

		pair<int, int> direcao_masetto = get_nova_direcao(
			paradas_masetto.at(prox_parada_masetto),
			pos_masetto);

		pos_masetto.X += direcao_masetto.X;
		pos_masetto.Y += direcao_masetto.Y;

		if(pos_masetto == paradas_masetto.at(prox_parada_masetto)) {
			prox_parada_masetto++;
		}

		pair<int, int> direcao_giovanni = get_nova_direcao(
			paradas_giovanni.at(prox_parada_giovanni),
			pos_giovanni);

		pos_giovanni.X += direcao_giovanni.X;
		pos_giovanni.Y += direcao_giovanni.Y;

		if(pos_giovanni == paradas_giovanni.at(prox_parada_giovanni)) {
			prox_parada_giovanni++;
		}

	}

	return true;
}

int main() {

	freopen("entrada.in", "r", stdin);
	int n;
	cin >> n;

	while(n--) {
		pair<int, int> pos_masetto;
		pair<int, int> pos_giovanni;

		cin >> pos_masetto.X >> pos_masetto.Y;
		cin >> pos_giovanni.X >> pos_giovanni.Y;

		pair<int, int> pos_inicio_masetto = pos_masetto;
		pair<int, int> pos_inicio_giovanni = pos_giovanni;

		int qnt_paradas_giovanni;
		cin >> qnt_paradas_giovanni;

		vector<pair<int, int>> paradas_giovanni;
		paradas_giovanni.reserve(qnt_paradas_giovanni);
		int qnt_mov_giovanni = 0;

		// paradas giovanni
		while(qnt_paradas_giovanni--) {
			int x, y;
			cin >> x >> y;

			int dif_x = abs(pos_giovanni.X - x);
			int dif_y = abs(pos_giovanni.Y - y);

			qnt_mov_giovanni += dif_x + dif_y;
			pos_giovanni = {x, y};

			paradas_giovanni.push_back({x, y});
		}

		int qnt_paradas_masetto;
		cin >> qnt_paradas_masetto;

		vector<pair<int, int>> paradas_masetto;
		paradas_masetto.reserve(qnt_paradas_masetto);
		int qnt_mov_masetto = 0;

		// paradas masetto
		while(qnt_paradas_masetto--) {
			int x, y;
			cin >> x >> y;

			int dif_x = abs(pos_masetto.X - x);
			int dif_y = abs(pos_masetto.Y - y);

			qnt_mov_masetto += dif_x + dif_y;
			pos_masetto = {x, y};

			paradas_masetto.push_back({x, y});
		}

		rota_segura(pos_inicio_masetto, pos_inicio_giovanni,
			paradas_masetto, paradas_giovanni,
			qnt_mov_masetto, qnt_mov_giovanni);
	}

	return 0;
}