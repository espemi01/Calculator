#include <string>

#ifndef CALC
#define CALC

class Calc{
private:
	long double a, b, c, p;
	std::vector<long double*> myNums;
	char opps[4];
public:
	Calc();
	void doMath(string opp);
	void push(long double myNum);
	//void graph(char *)

};
#endif