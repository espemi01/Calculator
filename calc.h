#ifndef CALC
#define CALC

class Calc{
private:
	int a, b, c, p;
	std::vector<int> myInts;
	char opps[4];
public:
	Calc();
	void doMath(char opp);
	void push(int myNum);
	//void graph(char *)

};
#endif