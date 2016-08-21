#include "resist_color.h"
#include <iostream>

//Resist_Color(); //construtor default
//ResistColor(Color::Cor c); 
Resist_Color::Resist_Color():Resist_Color(Color::PRETO){
} //construtor default

Resist_Color::Resist_Color(Color::Cor c):_rColor(c){
} //construtor com parametros

void Resist_Color::cor(Color::Cor n){
	_rColor = n;
} //setar cor da resistencia

Color::Cor Resist_Color::cor(void){ 
    return _rColor; 
} //retorna o valor da cor

//color()

long Resist_Color::power(Color::Cor pot){
	long auxm;
	switch(pot){
		case(Color::PRETO): auxm = 1; break;
		case(Color::MARROM): auxm = 10; break;
		case(Color::VERMELHO): auxm = 100; break;
		case(Color::LARANJA): auxm = 1.0e3; break;
		case(Color::AMARELO): auxm = 10e3; break;
		case(Color::VERDE): auxm = 100e3; break;
		case(Color::AZUL): auxm = 1e6; break;
		case(Color::VIOLETA): auxm = 10e6; break;
        default: std::cerr<<"Cor invalida."<< std::endl;
	}
   	return auxm;
} //faixa4 multiplicadora

long Resist_Color::power(void){ 
    return power(_rColor);
} //retorna o valor da faixa4


