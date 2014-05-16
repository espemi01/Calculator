#include "calc.h"

using namespace std;

Calc::Calc(){
	//first var, second var, current, previous.
	float a, b;
	std::vector<float*> myInts;
}

void calc::push(int myNum){
	myInts.push_back(myNum);
}

void Calc::doMath(char op){
	float a = myInts[myInts.size()];
	myInts.pop_back();
	float b = myInts[myInts.size()];
	myInts.pop_back();

	if(op == '*'){
		float tmp = a * b;

		myInts.push_back(tmp);
	}

	if(op == '/'){
		float tmp = a / b;

		myInts.push_back(tmp);
	}

	if(op == '-'){
		float tmp = a - b;

		myInts.push_back(tmp);
	}

	if(op == '+'){
		float tmp = a + b;

		myInts.push_back(tmp);
	}
}