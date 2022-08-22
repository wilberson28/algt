#include<iostream>
#include"busqueda.hpp"
void print_v(const std::vector<int>&v){
	for (int i=0; i< v.size(); i++){
		std::cout<<v[i]<<" ";
	}
	std::cout<<"\n"; 
}
int main(){
	std::vector<int>myvec={5,-1,3,0,6,2};
	print_v (myvec);
	std::cout<<"\n";
	bubble(myvec);
	print_v(myvec);


}
