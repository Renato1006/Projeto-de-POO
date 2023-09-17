#ifndef PRODUTO_H
#define PRODUTO_H

#include<iostream>
#include<string>

using namespace std;

class Produto{
	protected:// Pode ser private caso nao houver nenhuma heranca
	
		const int code; 
		// Assegura que o atributo nao muda de valor apos a 
		// seu primeiro preenchimento
		float valor;
		string nome; 
	
	public:

		Produto(int, float, const string &); //Construtor
		Produto(int,const string &);//Sobrecarga (Polimorfismo)
		~Produto();//Destrutor
		
		int getCode() const;
		
		void setValor(float);
		float getValor() const;
	
		void setNome(const string &);
		string getNome() const ;

		void mostra();
		
		friend float descontoNoPreco(Produto); // Metodo amigo
		virtual float calcLucro(); 
};
#endif
