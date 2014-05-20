#include <Fl/Fl_Button.H>
#include <string>
#include <iostream>
#include <cstdlib>
#include "display.h"
#include "calc.h"

#ifndef OPBUTTON_H
#define OPBUTTON_H

using namespace std;

class Op_Button : public Fl_Button {

 private:
  string character;
  Calc_Display* disp;
  Calc* myCalc;
 public:
  Op_Button(int x, int y, int w, int h, const char *label, Calc_Display* display, Calc* calculator)
    : Fl_Button(x,y,w,h,label){
    	this -> character = label;
    	this -> disp = display;
    	this -> myCalc = calculator;
  }

  string getFace(){return character;}
  

  static void clickcb(Fl_Widget *w, void * something) {
    Op_Button *myButton = (Op_Button *)w;
    //cout << myButton -> getFace() << endl;
    if (myButton -> getFace() == "C"){
    	myButton -> disp -> clear();
      myButton -> myCalc -> cl();
    }
    else if (myButton -> getFace() == "E"){
    	myButton -> myCalc -> push(myButton -> disp -> getVal());
    	myButton -> disp -> clear();
    }
    else if ((myButton -> getFace() == "+") || 
    		     (myButton -> getFace() == "-") ||
    		     (myButton -> getFace() == "*") ||
    		     (myButton -> getFace() == "/") ||
             (myButton -> getFace() == "sqrt")){
      if (((myButton -> disp -> getEnter()) || !(myButton -> disp -> getResShow())) && !(myButton -> disp -> getEntered())){
        myButton -> myCalc ->push(myButton -> disp -> getVal());
        myButton -> disp -> setEnter(false);
      }
    	myButton -> myCalc -> doMath(myButton -> getFace());
      
      
  }


    else if(myButton -> getFace() == "±"){
      myButton -> myCalc -> neg();
    }
  }
};
#endif
