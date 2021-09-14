#include <iostream>

void chr(int i){
	char c;
	std::cout << (char)i <<" ";
}


int main (){

	for (int i=65; i<=90 ; i++){
		chr(i);
	}

	
	for (int i=97; i<= 122; i++){
		chr(i);

	}


	return 0;
}