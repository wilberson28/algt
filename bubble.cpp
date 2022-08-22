#include <iostream>
#include "busqueda.hpp"
#include <vector>

void bubble(std::vector<int> &v){
	bool intercambio=true;
	while(intercambio){
		intercambio=false;
		for(int i=0;i<v.size();i++){
			if (v[i]>v[i+1]){
				int x=v[i+1];
				int y=v[i];
				v[i]=x;
				v[i+1]=y;
				i = i+1;
				intercambio=true;
				
			}
				
		}
	
	
	}
	
}



