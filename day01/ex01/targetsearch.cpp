#include <iostream>
#include <cstdlib>

int array(int size){
	int tab[size];
	std::cout<<"veuillez entrez un tableau de "<< size <<" éléments séparés par des espaces: "; 	
	for (int i = 0; i<size ;i++){
		std::cin >>tab[i];
	}

	int cible;
	std::cout<<"veuillez entrez une cible:\n";
	std::cin >> cible;
	int j=0; 
	for (int i = 0; i<size ;i++){
		if (tab[i]==cible){
			std::cout<< i << " ";
		}else{
			j++;
		}
	}
	if (j >=size){
		std::cout << "-1 ";
	}
	return 0;
	
}

int main (){
	
	
	array(4);
	return 0;
}