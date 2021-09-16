#include <iostream>
#include <algorithm>   


int array(int size){
	int tab[size];
	std::cout<<"veuillez entrez un tableau de "<< size <<" éléments séparés par des espaces: ";
	for (int i = 0; i< size ;i++){
		std::cin>> tab[i];
	}
	
     	std::sort(tab, tab + size);

    	for (int i = 0; i < size; ++i){
        std::cout << tab[i]*tab[i] << " ";
	}
	return 0;

}

int main (){
	std::cout << array(4);
	return 0;
}