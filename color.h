#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

#include <string>

class Color {
    
public:
    typedef enum {PRETO, MARROM, VERMELHO, LARANJA, AMARELO, VERDE, AZUL, VIOLETA, CINZA, BRANCO} Cor;

    static std::string to_string(Cor c); //retorna a cor em string

private:
    Cor _c;
};

#endif