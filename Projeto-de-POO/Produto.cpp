#include<iostream>
#include<string>

using namespace std;

#include "Produto.h"

Produto::Produto(int c, float v, const string &n):code(c),valor(v),nome(n){}
Produto::Produto(int c, const string &n):code(c),nome(n){ valor = 0;}

Produto::~Produto(){ cout << "Produto estragou! rs" << endl;}

int Produto::getCode() const{ return code;}

void Produto::setValor(float v){ valor = v;}
float Produto::getValor() const{return valor;}

void Produto::setNome(const string &n){nome = n;}

string Produto::getNome() const {return nome;}

void Produto::mostra()
{	cout << "\nCódigo: " << getCode() 
	     << "\nNome: " << getNome() 
	     << "\nValor: R$ " << getValor()
	     << "\nLucro com a venda: " << calcLucro()
	     << endl;  
}

float Produto::calcLucro() { return 0;}


