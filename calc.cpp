#include "calc.h"
#include "display.h"

using namespace std;

Calc::Calc(Calc_Display* display){
	//first var, second var, current, previous.
	long double a, b;
	std::vector<long double> myNums;
	myNums.push_back(1.0);
	disp = display;
}

void Calc::push(long double myNum){
	myNums.push_back(myNum);

}

void Calc::doMath(string op){
	long double a = myNums[myNums.size()-1];
	myNums.pop_back();
	long double b = myNums[myNums.size()-1];
	myNums.pop_back();

	if(op == "*"){
		long double tmp = a * b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

	else if(op == "/"){
		long double tmp = a / b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

	else if(op == "-"){
		long double tmp = a - b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

	else if(op == "+"){
		long double tmp = a + b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

}

void Calc::cl(){
	myNums.pop_back();
}

void Calc::sqrt(){
	long double a = myNums[myNums.size()-1];

}

void Calc::neg(){
	long double a = myNums[myNums.size()-1];
	myNums.pop_back();
	a = -a;
	disp -> opupdate(a);
	myNums.push_back(a);
}