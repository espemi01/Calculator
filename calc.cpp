#include "calc.h"
#include "display.h"
#include <math.h>
#include <iostream>

using namespace std;

Calc::Calc(Calc_Display* display){
	//first var, second var, current, previous.
	long double a, b;
	std::vector<long double> myNums;
	//myNums.push_back(1.0);
	disp = display;
}

void Calc::push(long double myNum){
	myNums.push_back(myNum);

}

void Calc::doMath(string op){
	for(int i = 0 ; i < myNums.size() ; i++){
		cout << myNums[i] << ' ';
		
	}
	cout << endl;

	if(op == "*"){
		long double b = myNums[myNums.size()-1];
		myNums.pop_back();
		long double a = myNums[myNums.size()-1];
		cout << a << " , " << b << endl;
		myNums.pop_back();
		long double tmp = a * b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

	else if(op == "/"){
		long double b = myNums[myNums.size()-1];
		myNums.pop_back();
		long double a = myNums[myNums.size()-1];
		myNums.pop_back();
		long double tmp = a / b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

	else if(op == "-"){
		long double b = myNums[myNums.size()-1];
		myNums.pop_back();
		long double a = myNums[myNums.size()-1];
		cout << a << " , " << b << endl;
		myNums.pop_back();
		//myNums.pop_back();
		long double tmp = a - b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}

	else if(op == "+"){
		long double b = myNums[myNums.size()-1];
		myNums.pop_back();
		long double a = myNums[myNums.size()-1];
		myNums.pop_back();
		long double tmp = a + b;
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}
	else if(op == "sqrt"){
		/*if (!(disp -> getResShow()) && !(disp -> getEntered())){
		this -> push(disp -> getVal());
		}*/
		long double a = myNums[myNums.size()-1];
		myNums.pop_back();
		long double tmp;
		tmp = sqrt(a);
		myNums.push_back(tmp);
		disp -> opupdate(tmp);
		disp -> setShow(true);
	}
	else if(op == "±"){
		long double a = myNums[myNums.size()-1];
		myNums.pop_back();
		a = a * -1;
		disp -> opupdate(a);
		myNums.push_back(a);
	}
	else if(op == "^"){
		long double b = myNums[myNums.size()-1];
		myNums.pop_back();
		long double a = myNums[myNums.size()-1];
		myNums.pop_back();
		long double tmp = pow(a,b);
		disp -> opupdate(tmp);
		myNums.push_back(tmp);
	}
	for(int i = 0 ; i < myNums.size() ; i++){
		cout << myNums[i] << ' ';
		
	}
	cout << endl;

}

void Calc::cl(){
	if(!myNums.empty()){
		myNums.pop_back();	
	}
}
