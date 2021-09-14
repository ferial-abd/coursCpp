#include <iostream>

int len(const char* str) {
	int i=0;
	while(*(str + i)) {
		i++;
	}
	return i;
}

int main() {
	
	std::cout << "la longueur de la chaine est: " << len("J'ai tout compris en C++ !!");

	return 0;
}