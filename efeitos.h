#ifndef EFEITOS_H_INCLUDED
#define EFEITOS_H_INCLUDED

//Fun��o respons�vel por rotacionar a imagem no sentido anti hor�rio
void girarAntiHorario(pont_imagem Imagem);

//Fun��o respons�vel por rotacionar a imagem no sentido hor�rio
void girarHorario(pont_imagem Imagem);

//Fun��o respons�vel pela binariza��o da imagem, uma vez passado um limite para o truncamento
void threshold(pont_imagem Imagem, int limite);

//Fun��o respons�vel por ampliar a imagem em x vezes, uma vez que seja passado a quantidade de vezes
void ampliar(pont_imagem Imagem, int zoom);

//Fun��o que reduz a imagem pela metade
void reduzir(pont_imagem Imagem);

//Fun��o respons�vel por deixar a imagem em escala de cinza, que � feito por meio da m�dia dos valores do r, g e b dos p�xeis
void escalaCinza(pont_imagem Imagem);

//Fun��o respons�vel por aplicar os filtros blurring, sharpening e detector de bordas na imagem
void ManipulacaoEspecial(pont_imagem Imagem, int efeito[3][3], int divisor);


#endif // EFEITOS_H_INCLUDED
