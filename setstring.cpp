#include <iostream>
#include <set>
#include <string>
int main(){
	std::string cadena;
	char sig[]={',', ';', '.', ':'};
	std::set <char> myset(sig,sig+4);
	std::cout<<"Ingrese una cadena de caracteres: "<<std::endl;
	std::getline(std::cin,cadena);
	for (int i=0; i<cadena.length(); ++i){
  		if (myset.count(cadena[i])){
		std::cout<<cadena[i]<<" ";
		}    
    }
	
	return 0;

	
}
