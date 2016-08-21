#ifndef RESISTOR_H_INCLUDED
#define RESISTOR_H_INCLUDED

#include "resist_color.h"
#include <array>


class Resistor {
	private:
		std::array<Resist_Color, 4> resColor;
		long _resistorValue;
		void set(int pos, Color::Cor c); //setar cor de resColor;
        void color2value(); //transformar cor em valor;
	public:
		Resistor(); //Construtor default
		Resistor(Color::Cor c1, Color::Cor c2, Color::Cor c3, Color::Cor c4); //Construtor com parametros - cores dos resistores

		void cor_faixa1(Color::Cor c); //setar faixa do resistor
        void cor_faixa2(Color::Cor c);
        void cor_faixa3(Color::Cor c);
        void cor_faixa4(Color::Cor c);
        long resistance_value(void); //retorna o valor da resistencia

};

#endif
