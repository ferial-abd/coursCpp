#include <iostream>


int Fizzbuzz (int number){
	if (number%3==0 && number%5==0){
		std::cout << "fizzbuzz";	
	}else if(number%3==0){
		std::cout << "fizz";
	}else if(number%5==0){
		std::cout << "buzz";
	}
	return 0;

}

int main (){
	Fizzbuzz(15);
	return 0;

}