#include<iostream>
#include<vector>
 using namespace std;
  class class_vector{

	  public:
		  void iniciar_vector(){

			  vector<int>dados_do_vector;
			  int valor_maximo=2;
			  int add_valor;
			  while(valor_maximo>0){

				  cout<<"insira um valor"<<endl;
				  cin>>add_valor;
				  dados_do_vector.push_back(add_valor);
				  valor_maximo--;


			  }
			 int tam =dados_do_vector.size();
			 for(int i=0;i<tam;i++){

				 cout<<"Valor: "<<dados_do_vector[i]<<endl;

			 }
		  }
  };
