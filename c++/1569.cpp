#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	while(n--) {
		int qnt_jogadores, qnt_pulos, qnt_jogadas;
		cin >> qnt_jogadores >> qnt_pulos >> qnt_jogadas;

		vector<int> pos_jogadores(qnt_jogadores, 1);
		map<int, int> pos_pulos;
		bool alguem_ganhou = false;

		while(qnt_pulos--) {
			int origem, destino;
			cin >> origem >> destino;

			pos_pulos[origem] = destino;
		}

		int jogador_atual = 0;
		while(qnt_jogadas--) {
			int dado;
			cin >> dado;

			if(!alguem_ganhou) {
				int nova_posicao = pos_jogadores.at(jogador_atual) + dado;

				auto is_pulo = pos_pulos.find(nova_posicao);
				if(is_pulo != pos_pulos.end()) {
					nova_posicao = pos_pulos.at(nova_posicao);
				}

				if(nova_posicao >= 100) {
					nova_posicao = 100;
					alguem_ganhou = true;
				}

				pos_jogadores.at(jogador_atual) = nova_posicao;

				jogador_atual++;
				if(jogador_atual == qnt_jogadores) jogador_atual = 0;
			}
		}

		for(int i = 0; i < qnt_jogadores; i++) {
			printf("Position of player %d is %d.\n",
				i + 1,
				pos_jogadores.at(i));
		}
	}

	return 0;
}