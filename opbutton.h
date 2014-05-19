#include <Fl/Fl_Button.H>
#include <string>
#include <iostream>
#include <cstdlib>
#include "display.h"

#ifndef OPBUTTON_H
#define OPBUTTON_H

using namespace std;

class Op_Button : public Fl_Button {

 private:
  string character;
  Calc_Display *disp;

 public:
  Op_Button(int x, int y, int w, int h, const char *label, Calc_Display* display)
    : Fl_Button(x,y,w,h,label){
    	this -> character = label;
    	this -> disp = display;
  }

  string getFace(){return character;}
  

  static void clickcb(Fl_Widget *w, void * something) {
    Op_Button *myButton = (Op_Button *)w;
    cout << myButton -> getFace() << endl;
    if (myButton -> getFace() == "C"){
    	myButton -> disp -> clear();
    }
  }
};
#endif
