#include <iostream>
#include <string>
#include "OutputSolution.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");
	
	int example = 0;
	string s, p;
	bool expected;

	OutputSolution outputSolution;

	example++;
	s = "aa";
	p = "a";
	expected = false;
	outputSolution.setOutput(example, s, p, expected);
	outputSolution.print();
	
	example++;
	s = "aa";
	p = "a*";
	expected = true;
	outputSolution.setOutput(example, s, p, expected);
	outputSolution.print();
	
	example++;
	s = "ab";
	p = ".*";
	expected = true;
	outputSolution.setOutput(example, s, p, expected);
	outputSolution.print();	
}
