//resist_color.h
#ifndef RESIST_COLOR_H_INCLUDED
#define RESIST_COLOR_H_INCLUDED

//VERIFICAR RELACAO ***********
#include "color.h"
//***************

class Resist_Color {
public:
	Resist_Color(); //construtor default
	Resist_Color(Color::Cor c); //construtor com parametros
	void cor(Color::Cor n); //setar cor da resistencia
	Color::Cor cor(void); //retorna o valor da cor
    long value(void);
	long power(void); //retorna o valor da cor corrente da faixa4
private:
	Color::Cor _rColor;  
        //
	long power(Color::Cor pot); //faixa4 multiplicadora		
};


#endif
