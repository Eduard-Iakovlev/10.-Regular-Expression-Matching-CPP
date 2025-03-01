#pragma once
class ChrckSolution{
public:
	ChrckSolution(bool result, bool expected);
	bool check();
private:
	bool _result;
	bool _expected;
};

