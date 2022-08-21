#include <iostream>
#include <map>
int main(){
	std::map<char,int> mymap;
	mymap['a']=5;
	mymap['y']=7;
	mymap['i']=-2;
	mymap['o']=0;
	
	std::map<char,int>::iterator it;
	for(it=mymap.begin(); it!=mymap.end(); it++){
		std::cout<<"("<<it->first<<","<<it->second<<")";
	}
	std::cout<<"\n";
	return 0;
}
