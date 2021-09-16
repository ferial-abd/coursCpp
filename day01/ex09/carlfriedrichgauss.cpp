#include<iostream>
#include<string>


int somme(int min, int max){
	int sum=0;
	if (min < max ){
		for(int i= min; i<=max ; i++ ){
		sum = sum + i ; 
	}
	std::cout << "la somme est égale  " << sum ; }
	return 0 ; 
}
int main (){
	return somme(0,3);
}

