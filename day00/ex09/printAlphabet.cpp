#include <iostream>

void chr(int i){
	std::cout << (char)i <<" ";
}
int ord(char c){
	return (int)c;
}


int main (){

	for (int i=ord('A'); i<=ord('Z'); i++){
		chr(i);
	}
	std::cout<<"\n";
	
	for (int i=('a'); i<= ('z'); i++){
		chr(i);

	}
	std::cout<<"\n";


	return 0;
}