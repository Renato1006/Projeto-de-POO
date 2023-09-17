#ifndef CELULAR_H
#define CELULAR_H
#include<string>

using namespace std;

#include "Produto.h"
class Televisao;

class Celular : public Produto{
	private:
		float armazenamento;
		float ram;
		string marca;
	public:

		Celular(int, float, const string &, float, float, const string &); //(code, valor, nome,armazenamento,ram,marca)
		Celular(int, const string &, float, float, const string & ); //(code, nome, armazenamento, ram, marca)
		
		~Celular();

		float getArmazenamento() const;
		void setArmazenamento(float);

		float getRam() const; // Assegura que o metodo nao altere os dados
		void setRam(float);

		string getMarca() const;
		
		void setMarca(const string &);

		void descValor(Televisao *); //Nao const - nao const 
		
		void mostra();
		void mostra(float);
		
		float calcLucro();
		
		float calcLucro(double);
		//Metodos friends para aplicacao de ponteiros 

		// const - nao const
		friend void versaoMetadeArmazenamento(Celular *const );
		//nao const - const
		friend void imprimeCode(Celular *); 
		//const - const
		friend void imprime1Code(Celular *const);
};

#endif
