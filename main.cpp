#include <iostream>
#include "funcs.h"

int main(){
	signed int brack = 0;
	int *bracks = &brack;

	std::string line, output;
	while(std::getline(std::cin,line)){

		line = removeLeadingSpaces(line);
		output+=braceTabber(line,bracks)+'\n';

	}
	std::cout<<output;
	return 0;
}
