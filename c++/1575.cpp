#include <bits/stdc++.h> 

using namespace std;

pair<int, int> get_nova_direcao(pair<int, int> parada, pair<int, int> pos) {

	pair<int, int> direcao = {0, 0};

	if(parada.first > pos.first) direcao = {1, 0};	
	if(parada.first < pos.first) direcao = {-1, 0};	
	if(parada.second > pos.second) direcao = {0, 1};	
	if(parada.second < pos.second) direcao = {0, -1};

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

	int last_index = paradas_giovanni.size() - 1;
	pair<int, int> destino_giovanni = paradas_giovanni.at(last_index);

	for(int i = 0; i < qnt_mov_giovanni; i++) {

		pair<int, int> direcao_masetto = get_nova_direcao(
			paradas_masetto.at(prox_parada_masetto),
			pos_masetto);

		pos_masetto.first += direcao_masetto.first;
		pos_masetto.second += direcao_masetto.second;

		if(pos_masetto == paradas_masetto.at(prox_parada_masetto)) {
			if(!(prox_parada_masetto == paradas_masetto. size() - 1)) {
				prox_parada_masetto++;
			}
		}

		pair<int, int> direcao_giovanni = get_nova_direcao(
			paradas_giovanni.at(prox_parada_giovanni),
			pos_giovanni);

		pos_giovanni.first += direcao_giovanni.first;
		pos_giovanni.second += direcao_giovanni.second;

		if(pos_giovanni == paradas_giovanni.at(prox_parada_giovanni)) {
			if(!(prox_parada_giovanni == paradas_giovanni. size() - 1)) {
				prox_parada_giovanni++;
			}
		}


		if(pos_masetto == pos_giovanni) return false;
		if(pos_giovanni == destino_giovanni) return true;
	}

	return true;
}

int main() {

	//freopen("entrada.in", "r", stdin);
	int n;
	cin >> n;

	bool primeiro_caso = true;

	while(n--) {

		if(!primeiro_caso)
			cout << endl;
		else primeiro_caso = false;

		pair<int, int> pos_masetto;
		pair<int, int> pos_giovanni;

		cin >> pos_masetto.first >> pos_masetto.second;
		cin >> pos_giovanni.first >> pos_giovanni.second;

		pair<int, int> pos_inicio_masetto = pos_masetto;
		pair<int, int> pos_inicio_giovanni = pos_giovanni;

		int qnt_paradas_giovanni;
		cin >> qnt_paradas_giovanni;

		vector<pair<int, int>> paradas_giovanni;
		paradas_giovanni.reserve(qnt_paradas_giovanni);
		int qnt_mov_giovanni = 0;

		// leitura paradas giovanni
		while(qnt_paradas_giovanni--) {
			int x, y;
			cin >> x >> y;

			int dif_x = abs(pos_giovanni.first - x);
			int dif_y = abs(pos_giovanni.second - y);

			qnt_mov_giovanni += dif_x + dif_y;
			pos_giovanni = {x, y};

			paradas_giovanni.push_back({x, y});
		}

		int qnt_paradas_masetto;
		cin >> qnt_paradas_masetto;

		vector<pair<int, int>> paradas_masetto;
		paradas_masetto.reserve(qnt_paradas_masetto);
		int qnt_mov_masetto = 0;

		// leitura paradas masetto
		while(qnt_paradas_masetto--) {
			int x, y;
			cin >> x >> y;

			int dif_x = abs(pos_masetto.first - x);
			int dif_y = abs(pos_masetto.second - y);

			qnt_mov_masetto += dif_x + dif_y;
			pos_masetto = {x, y};

			paradas_masetto.push_back({x, y});
		}

		bool is_seguro = rota_segura(pos_inicio_masetto, pos_inicio_giovanni,
			paradas_masetto, paradas_giovanni,
			qnt_mov_masetto, qnt_mov_giovanni);

		cout << (is_seguro ? "Yes" : "No") << endl;
	}

	return 0;
}