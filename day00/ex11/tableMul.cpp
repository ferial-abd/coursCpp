#include <iostream>

int main (){

	int number ;
	std::cout <<"ecrivez un nombre:";
	std::cin >> number ;
	for (int i=0; i<=10 ; i++){
		std::cout<< number<<" * "<< i <<" = "<< number*i<<"\n";
	}
		
	return 0;
}