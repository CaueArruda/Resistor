#include "color.h"

std::string Color::to_string(Cor c){
	std::string auxm="PRETO";
	switch(c){
		case(PRETO): auxm = "PRETO"; break;
		case(MARROM): auxm = "MARROM"; break;
		case(VERMELHO): auxm = "VERMELHO"; break;
		case(LARANJA): auxm = "LARANJA"; break;
		case(AMARELO): auxm = "AMARELO"; break;
		case(VERDE): auxm = "VERDE"; break;
		case(AZUL): auxm = "AZUL"; break;
		case(VIOLETA): auxm = "VIOLETA"; break;
		case(CINZA): auxm = "CINZA"; break;
		case(BRANCO): auxm = "BRANCO"; break;
    }
	return auxm;
}