/**********************************************
* File: vector.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file demonstrates an example of templates
* where the function is in the header file.
* tempHead.h includes the function definition
* in the header file.
**********************************************/

#include <iostream> /*C++ version of stdio.h*/
#include <string>  /* C++ string */
#include <vector> /* Calls the vector library */


template<class Gen>
void printVecElems( std::vector< Gen > theVec ){
	
	for(unsigned int i = 0; i < theVec.size(); ++i){
		
		std::cout << theVec.at(i) << " ";
		
	}
	
	std::cout << std::endl;
}

/********************************************
* Function Name  : main
* Pre-conditions : none
* Post-conditions: int
* 
* This is the main driver function 
********************************************/
int main(){

	std::vector< char > name;
	
	name.push_back('I'); name.push_back('r'); name.push_back('i');
	name.push_back('q'); name.push_back('s'); name.push_back('h');
	
	printVecElems(name);
	name.erase(name.begin() + 3);
	printVecElems(name);
	
	std::vector< char > equalVec = name;
	
	equalVec.push_back(' '); equalVec.push_back('3'); 
	equalVec.push_back('0'); equalVec.push_back('-'); 
	equalVec.push_back('U'); equalVec.push_back('S');
	equalVec.push_back('C'); equalVec.push_back(' ');
	equalVec.push_back('2'); equalVec.push_back('7');
	
	printVecElems(name);
	printVecElems(equalVec);
	
	std::vector< int > integers(12, -5);
	
	printVecElems(integers);
	
	for(int i = 0; i < 10; ++i){
		integers.at(i) = 2*i;
	}
	
	printVecElems(integers);
	
	integers.push_back(1842);
	
	printVecElems(integers);
		
	return 0;
}
