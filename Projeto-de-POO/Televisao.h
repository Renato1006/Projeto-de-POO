#ifndef TELEVISAO_H
#define TELEVISAO_H

#include<iostream>
#include<string>

using namespace std;

#include "Produto.h"

class Televisao : public Produto{

	private:
		string tipo;
	
	public:
	
		Televisao(int, float, const string &, const string &);
		Televisao(int, const string &, const string &);
		~Televisao();
	
		void setTipo( const string &);
	
		string getTipo() const;

		void mostra();

		friend class Celular; // classe amiga
};
#endif
