#include <string>
#include <cctype>
#include <iostream>

std::string removeLeadingSpaces(std::string line){
	while(true){
		if(isspace(line[0])){
			line.erase(0,1);
		}
		else{
			return line;
		}
	}
}

int countChar(std::string line, char c){
	int count=0;
	for(char t:line){
		if(t==c){
			count++;
		}
	}
	return count;
}

std::string braceTabber(std::string line, int *braces){

  *braces+=countChar(line,'}'); //fixed

	line.insert(0,*braces,'\t');

	*braces+=countChar(line,'{');
	
	return line;
}
