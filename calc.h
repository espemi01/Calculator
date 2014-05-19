#include <string>
#include "display.h"
#include <vector>

#ifndef CALC
#define CALC

class Calc{
private:
	long double a, b, c, p;
	std::vector<long double> myNums;

	Calc_Display* disp;
public:
	Calc(Calc_Display*);
	void doMath(string opp);
	void push(long double myNum);
	void sqrt();
	//void graph(char *)

};
#endif