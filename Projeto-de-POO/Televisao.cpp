#include<iostream>
#include<string>

using namespace std;

#include "Produto.h"
#include "Televisao.h"

Televisao::Televisao(int c, float v, const string &n, const string &Tipo ):Produto(c,v,n),tipo(Tipo){}
Televisao::Televisao(int c, const string &n, const string &Tipo):Produto(c,n),tipo(Tipo){}

Televisao::~Televisao(){cout << "A tela da TV quebrou! rs" << endl;}

void Televisao::setTipo( const string &Tipo){tipo = Tipo;}

string Televisao::getTipo() const{return tipo;}

void Televisao::mostra(){
	Produto::mostra();	
	cout << "Televisão do tipo :" << tipo 
	     << endl; }
