#include<iostream>
#include<string>

using namespace std;

#include "Produto.h"
#include "Televisao.h"
#include "Celular.h"

Celular::Celular(int c, float v, const string &n, float Armazenamento, float Ram, const string &Marca ):Produto(c,v,n),armazenamento(Armazenamento),ram(Ram),marca(Marca){}
Celular::Celular(int c, const string &n, float Armazenamento, float Ram, const string &Marca): Produto(c,n),armazenamento(Armazenamento),ram(Ram),marca(Marca){}

Celular::~Celular(){cout << "Celular Sumiu! rs" << endl;}

void Celular::setArmazenamento(float Armazenamento){armazenamento = Armazenamento;}
float Celular::getArmazenamento() const {return armazenamento;}

void Celular::setRam(float Ram){ram = Ram;}
float Celular::getRam() const {return ram;}

void Celular::setMarca(const string &Marca){marca = Marca;}
string Celular::getMarca() const {return marca;}

float Celular::calcLucro() { return valor*0.2;}

float Celular::calcLucro(double comissao) { return valor*0.2 -comissao;}

void Celular::mostra() {
	Produto::mostra();
	cout << "Marca do celular :" << marca 
	     << "\nArmazenamento: " << armazenamento
	     << "\nMemória RAM: " << ram
	     << "\nLucro: " << calcLucro()
	     << "\nLucro com a comissão: " << calcLucro(0.1*valor)
	     << endl;}
	     
void Celular::mostra(float r) {
	cout << "Marca do celular :" << marca 
	     << "\nNovo armazenamento: " << r
	     << endl;}

	
void Celular::descValor(Televisao *t){ 
	if(t->valor == 0)
		cout << "Já temos o valor zero!" << endl;
	else
		t->valor = t->valor-500;
} //Metodo permitido devido a relacao friend entre classes
