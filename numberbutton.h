#include <Fl/Fl_Button.H>
#include <string>
#include <iostream>
#include <cstdlib>

#ifndef NUMBERBUTTON_H
#define NUMBERBUTTON_H

class Number_Button : public Fl_Button {

 private:
  int value;

 public:
  Number_Button(int x, int y, int w, int h, int val, const char *label)
    : Fl_Button(x,y,w,h,label){
    value = val;
  }
  

  void clickcb(Fl_Widget *w, void * something) {
    Number_Button *myButton = (Number_Button *)w;
    std::cout << "Hello" << std::endl;
    
  }
};
#endif
