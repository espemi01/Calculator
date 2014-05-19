#include <Fl/Fl_Button.H>
#include <string>

#ifndef OPBUTTON_H
#define OPBUTTON_H

class Op_Button : public Fl_Button {

 private:
  int character;

 public:
  Op_Button(int x, int y, int w, int h, const char *label)
    : Fl_Button(x,y,w,h,label){
  }
  

  static void clickcb(Fl_Widget *w, void * something) {
    Op_Button *myButton = (Op_Button *)w;
    
  }
};
#endif
