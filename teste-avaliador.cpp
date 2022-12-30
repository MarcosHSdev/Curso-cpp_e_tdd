#include "Avaliador.hpp"
#include "Usuario.hpp"
#include <iostream>

int main() {
	Lance primeiroLance(Usuario("Marcos Henrique"), 1000);
	Lance segundoLance(Usuario("Ana Maria"), 2000);
	Leilao leilao("Fiat 147 0Km");
	leilao.recebeLance(primeiroLance);
	leilao.recebeLance(segundoLance);

	Avaliador leiloeiro;
	leiloeiro.avalia(leilao);

	std::cout << leiloeiro.recuperaMaiorValor() << std::endl;

	return 0;
}