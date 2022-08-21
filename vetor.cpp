#include <iostream>
#include <vector>
int main(){
	std::vector <int> v= {4,1,0,-2,8};
	std::vector<int>::iterator it;
	
	for (it = v.begin(); it < v.end(); it++){
		std::cout<<*it<<" ";
	}
	
	std::cout<<std::endl;
	
	return 0;
