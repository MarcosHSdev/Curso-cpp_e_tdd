#pragma once
#include "Leilao.hpp"
#include <vector>

class Avaliador {
private:
	float maiorValor;
public:
	void avalia(Leilao);
	float recuperaMaiorValor() const;
};