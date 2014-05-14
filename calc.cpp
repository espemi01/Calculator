#include "calc.h"

using namespace std;

Calc::Calc(){
	//first var, second var, current, previous.
	float a, b, c, p;
	std::vector<int> myInts;
	char ops[4] = { [0] = "*", [1] = "/", [2] = "-", [3] = "+" };
	//  ^for checking the priority of operators
}

void calc::push(int myNum){
	myInts.push_back(myNum);
}

void Calc::doMath(char opp){
	char* a = "DO THINGS!!!"
}