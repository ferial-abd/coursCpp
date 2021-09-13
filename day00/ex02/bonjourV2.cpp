#include <iostream>
#include <string>


int bonjour(){
std::string name ;
std::cout <<"Bonjour! quel est votre prénom ?\n";	
std::cin >> name;
std::cout << "Bonjour " << name << " comment allez vous ?\n";
return 0;
}


int main (){
 
	bonjour (); 
	return 0;
}

