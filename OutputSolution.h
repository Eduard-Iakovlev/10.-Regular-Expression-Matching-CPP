#pragma once
#include <string>

using namespace std;

class OutputSolution{
public:
	OutputSolution() = default;
	void setOutput(int example, string s, string p, bool expected);
	void print();
private:
	int _example;
	string _s, _p;
	bool _expected, _result;

	void setExample(int example);
	void setS(string s);
	void setP(string p);
	void setExpected(bool expected);
	void setResult(bool result);
	void printCheck();
};

