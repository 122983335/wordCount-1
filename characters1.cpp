#include <iostream> 
#include <fstream> 
using namespace std; 
void characters() 
{ 
	fstream infile;
	infile.open("input.txt"); 
	char ch; 
	int counter = 0; 
	while (infile && infile.get(ch)) 
	{ 
		counter++; 
	} 
	cout << "characters:" << counter << endl; 
}

