#include <iostream>
#include <queue>
#include <string>
int main(){
	std::queue <std::string> myqueue;
	int suma=0;
	std::cout<<"Para finalizar ingrese end"<<std::endl;
	while(true){
		std::string nombre;
		
		std::cout<<"Ingrese el nombre del cliente"<<std::endl;
		std::cin>>nombre;
		if(nombre=="end" || nombre=="End" || nombre=="END"){
			break;
		}
		else{
			myqueue.push(nombre);
			suma+=1;
		}	
	}
	
	
	for (int i=0; i<suma; i++){
		std::cout<<"Serving: "<<myqueue.front()<<std::endl;
		myqueue.pop();
	
	}	
}
