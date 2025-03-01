#include "ChrckSolution.h"

ChrckSolution::ChrckSolution(bool result, bool expected) : _result(result), _expected(expected){}

bool ChrckSolution::check(){
    return _result == _expected;
}
