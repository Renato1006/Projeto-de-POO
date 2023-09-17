#include<iostream>
#include<fstream>
#include<string>

using namespace std;

#include "Produto.h"
#include "Televisao.h"
#include "Celular.h"

float descontoNoPreco(Produto t){return t.valor*0.8;} // implementacao do metodo friend


// const - nao const
void versaoMetadeArmazenamento( Celular *const Armazenamento)
{	
	Armazenamento->armazenamento = 0.5*(Armazenamento->armazenamento);
} // Mostra a versão com metade do armazenamento 
	
//nao const - const
void imprimeCode(Celular *s)
{ //Entrada um vetor de objetos
	cout << "Codigo de " << s->nome << ": "<< s->code << endl;
} // Imprime o codigo (atributo constante) de varios objetos metodo const

//const - const
void imprime1Code(Celular *const c)
{
	cout << "Codigo de " << c->nome << ": " << c->code << endl;
};
	
int main()
{	Produto *pp;

	{	Produto p1(369,50,"Pendirve");
		cout << "\nProduto: " << endl;
		pp = &p1;
		pp->mostra();
		cout << "\nPreço com desconto de 20%: R$ " << descontoNoPreco(*pp)
		     << endl;
		
		Produto *p2 = new Produto(157,"Sacola reciclável");
		cout << "\n\nProduto: " << endl;
		p2->mostra();	
	}
	
	{	Televisao Tv1(300, 2000, "Smart TV","LED"), *t;
		Celular St1(5369,3000,"Redmi Note 8", 128,8,"Xiaomi");
		Celular *const teste = &St1;
		Celular *teste2 = &St1;
		
		Tv1.mostra();
		St1.mostra();
		cout << "\nCelular com a metade do armazenamento" << endl;
		versaoMetadeArmazenamento(teste);
		St1.mostra(teste->getArmazenamento());
		
		t = &Tv1;
		pp = &Tv1;
		cout << "\nComprando os dois, tem desconto de R$ 500 na televisão:"
		     << "\nValor anterior: " << pp->getValor() << endl;
		St1.descValor(t); //Alterando valor de uma classe por um método de outra classe, pois um é classe friend
		cout << "Novo Valor: " << pp->getValor()
		     << endl;
		
		//Imprimindo o código por diferentes métodos
		imprimeCode(teste2); 
		imprime1Code(teste); 	
	}
	
	return 0;
}
