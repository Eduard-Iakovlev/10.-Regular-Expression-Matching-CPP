#include "OutputSolution.h"
#include "Solution.h"
#include "ChrckSolution.h"
#include <iostream>

void OutputSolution::setOutput(int example, string s, string p, bool expected) {
	setExample(example);
	setS(s);
	setP(p);
	setExpected(expected);
}

void OutputSolution::print(){
	cout << "============ Тест " << _example << " ============" << endl;
	cout << "Входные данные: s = \"" << _s << "\", p = \"" << _p << "\"" << endl;
	cout << "Ожидаемый результат: " << (_expected ? "true" : "false") << endl;
	setResult(_result);
	cout << "Полученный результат: " << (_result ? "true" : "false") << endl;
	cout << "============ Проверка ===============" << endl;
	printCheck();
	cout << "=====================================\n" << endl;
}

void OutputSolution::setExample(int example){
	_example = example;
}

void OutputSolution::setS(string s){
	_s = s;
}

void OutputSolution::setP(string p){
	_p = p;
}

void OutputSolution::setExpected(bool expected){
	_expected = expected;
}

void OutputSolution::setResult(bool result){
	Solution solution;
	_result = solution.isMatch(_s, _p);
}

void OutputSolution::printCheck(){
	ChrckSolution check(_result, _expected);
	cout << "Тест " << _example << ": " << (check.check() ? "пройден" : "провален") << endl;
}
