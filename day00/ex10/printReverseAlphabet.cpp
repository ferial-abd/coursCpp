#include <iostream>

void chr(int i){
	char c;
	std::cout << (char)i <<" ";
}
int ord(char c){
	return (int)c;
}


int main (){

	for (int i=ord('Z'); i>=ord('A'); i--){
		chr(i);
	}
	std::cout<<"\n";

	
	for (int i=ord('z'); i>= ord('a'); i--){
		chr(i);

	}
	std::cout<<"\n";


	return 0;
}