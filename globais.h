#ifndef GLOBAIS_H_INCLUDED
#define GLOBAIS_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Struct que define os elementos r, g e b de cada pixel
typedef struct{
	int red, green, blue;
}pixel;

//Struct de imagem que cont�m uma matriz de pixeis, al�m das outras informa��es contidas no arquivo ppm
typedef struct{
	pixel **pix_imagem;
	char codigo[3];
	int qualidade, colunas, linhas;
}imagem, *pont_imagem;


//Fun��o respons�vel por realizar a aloca��o d�n�mica dos pixeis, uma vez passado o endere�o de mem�ria da imagem
void AlocarPixeis(pont_imagem Imagem);

//Fun��o respons�vel por ler a imagem a partir do arquivo e armazenar suas imforma��es dentro da vari�vel Imagem
void lerImagem(pont_imagem Imagem);

//Fun��o respons�vel por salvar os dados da imagem em um arquivo
void salvarImagem(pont_imagem Imagem);

//Menu Op��es
void menu();


#endif // GLOBAIS_H_INCLUDED
