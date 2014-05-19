#include <Fl/Fl_Button.H>
#include <string>
#include <iostream>
#include <cstdlib>

#ifndef OPBUTTON_H
#define OPBUTTON_H

using namespace std;

class Op_Button : public Fl_Button {

 private:
  string character;

 public:
  Op_Button(int x, int y, int w, int h, const char *label)
    : Fl_Button(x,y,w,h,label){
    	character = label;
  }

  string getFace(){return character;}
  

  static void clickcb(Fl_Widget *w, void * something) {
    Op_Button *myButton = (Op_Button *)w;
    cout << myButton -> getFace() << endl;
  }
};
#endif
