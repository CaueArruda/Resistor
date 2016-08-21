#include "resistor.h"


void Resistor::color2value(){
	long auxm = resColor[3].power();
    _resistorValue = ((resColor[0].cor()*100 + resColor[1].cor()*10 + resColor[2].cor())*auxm);

}

void Resistor::set(int pos, Color::Cor c){
	if(pos<0)pos =0;
	if(pos>3)pos =3;
	resColor[pos].cor(c);
	color2value();
}

Resistor::Resistor(){

	resColor[0].cor(Color::AMARELO);
	resColor[1].cor(Color::AZUL);
	resColor[2].cor(Color::VERDE);
	resColor[3].cor(Color::MARROM);
	color2value();
}

Resistor::Resistor(Color::Cor c1, Color::Cor c2, Color::Cor c3, Color::Cor c4){
	resColor[0].cor(c1);
	resColor[1].cor(c2);
	resColor[2].cor(c3);
	resColor[3].cor(c4);
	color2value();
}

void Resistor::cor_faixa1(Color::Cor c){
	set(0,c);
}

void Resistor::cor_faixa2(Color::Cor c){
	set(1,c);

}
void Resistor::cor_faixa3(Color::Cor c){
	set(2,c);
}

void Resistor::cor_faixa4(Color::Cor c){
	set(3,c);
}

long Resistor::resistance_value(void){return _resistorValue;
}
