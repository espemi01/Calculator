#include <Fl/Fl_Button.H>
#include <string>
#include <iostream>
#include <cstdlib>
#include "display.h"

#ifndef NUMBERBUTTON_H
#define NUMBERBUTTON_H

class Number_Button : public Fl_Button {

 private:
  long double value;
  Calc_Display* disp;

 public:
  Number_Button(int x, int y, int w, int h, long double val, const char *label, Calc_Display* display)
    : Fl_Button(x,y,w,h,label){
    	this -> value = val;
    	this -> disp = display; 
  }

  int getVal(){return value;}
  

  static void clickcb(Fl_Widget *w, void * something) {
    Number_Button *myButton = (Number_Button *)w;
    //std::cout << myButton -> getVal() << std::endl;
    myButton -> disp -> update(myButton -> getVal());
  }
};
#endif
