#include <iostream>
struct pareja{
	char key;
	int val;
};

int main(){
	pareja p1;
	p1.key='c';
	p1.val=-3;
	std::cout<<"("<<p1.key<<":"<<p1.val<<") \n";
	pareja *apuntador=&p1;
	std::cout<<(*apuntador).key<<"\n";
	return 0;

}
