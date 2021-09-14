#include <iostream>
#include <cstring> 

int main() {
	int a;
	int b;
	char operation;
	std::cout << "veuillez entrer le premier nombre: ";
	std::cin >> a;
	std::cout <<"veuillez entrer l'opération: ";
	std::cin >> operation;
	std::cout << "veuillez entrer le second nombre: ";
	std::cin >> b;


	std::cout<<"le resultat est: ";
	switch(operation) {
		case '+':
			std::cout << a + b;
			break;

		case '-':
			std::cout << a - b;
			break;

		case '*':
			std::cout << a * b;
			break;

		case '/':
			std::cout << a / b;
			break;
	}

	return 0;
}