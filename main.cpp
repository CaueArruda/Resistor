#include <iostream>
#include "resistor.h"

using namespace std;

int main() {
	Resistor res1, res2(Color::VERMELHO, Color::VERMELHO,Color::VERMELHO,Color::VERMELHO), res3; //criacao de 3 resistores
	//res1 = default  res2 = (vermelho, vermelho, vermelho, vermelho) res3 = default;

	res3.cor_faixa1(Color::MARROM);   //a partir daqui o res3 eh editado e assume as cores marrons
	res3.cor_faixa2(Color::MARROM);
	res3.cor_faixa3(Color::MARROM);
	res3.cor_faixa4(Color::MARROM);
	std::cout << "First resistance: " << res1.resistance_value() << endl;  // mostra os valores das resistencias de cada resistor
	std::cout << "Second resistance: " << res2.resistance_value() << endl;
	std::cout << "Third resistance: " << res3.resistance_value() << endl;
	return 0;
}
