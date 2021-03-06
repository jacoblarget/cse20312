#include "../include/LinearProbe5.h"

#define COUT std::cout
#define ENDL std::endl

int main(){
	
	const unsigned int hashSize = 7;
	
	HashTable<std::string, unsigned int> strHash(hashSize);
	
	HashTable<int, double> intHash;
	
	// Insert into the String Hash 
	strHash.insert( { "Data", 22} );
	strHash.insert( { "Structures", 15} );
	strHash.insert( { "Hash", 9} );
	
	COUT << strHash << ENDL;
	
	// Insert into the int, double hash 
	intHash.insert( {5, 3.14} );
	
	COUT << intHash << ENDL;
	
	return 0;
}

