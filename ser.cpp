#include <iostream>
#include <set>
int main(){
	char sig[]={',', ';', '.', ':'};
	std::set <char> myset(sig,sig+4);
	myset.insert('j');
	myset.erase('h');
	char elem='h';
	if (myset.count(elem)){
		std::cout<<elem<<" sí está. \n";
	}
	else{
		std::cout<<elem<<" no está. \n";
	}
	
	return 0;

}
