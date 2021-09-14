#include <iostream>
#include <string>


int bonjour(){
std::string name ;
std::cout <<"Bonjour! quel est votre prénom ?\n";	
std::cin >> name;
if (name!="johnny"){
	std::cout << "Salut, " << name << "!\n";
}else{
std::cout <<"Hello, my love!";
}
return 0;
}


int main (){
 
	bonjour (); 
	return 0;
}

