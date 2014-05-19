#include "calc.h"

using namespace std;

Calc::Calc(){
	//first var, second var, current, previous.
	long double a, b;
	std::vector<long double*> myInts;
}

void Calc::push(long double myNum){
	myInts.push_back(myNum);
}

void Calc::doMath(char op){
	long double a = myInts[myInts.size()-1];
	myInts.pop_back();
	long double b = myInts[myInts.size()-1];
	myInts.pop_back();

	if(op == '*'){
		long double tmp = a * b;

		myInts.push_back(tmp);
	}

	if(op == '/'){
		long double tmp = a / b;

		myInts.push_back(tmp);
	}

	if(op == '-'){
		long double tmp = a - b;

		myInts.push_back(tmp);
	}

	if(op == '+'){
		long double tmp = a + b;

		myInts.push_back(tmp);
	}
}