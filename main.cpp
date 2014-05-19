#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <string>
#include "opbutton.h"
#include "numberbutton.h"
#include "display.h"


using namespace std;

Calc_Display *display;

void exitcb(Fl_Widget * something,void * eh){
  exit(0);
}

int main(int argc, char *argv[]){
  
  Fl_Window *window = new Fl_Window(260,407.5);

  display = new Calc_Display(FL_DOWN_BOX,10,10,240,75,"0",0);

  Op_Button *b1      = new Op_Button     (10    , 95 , 52.5 , 52.5 , "±"    , display );
  Op_Button *b2      = new Op_Button     (72.5  , 95 , 52.5 , 52.5 , "sqrt" , display );
  Op_Button *b3      = new Op_Button     (135   , 95 , 52.5 , 52.5 , "^"    , display );
  Op_Button *b4      = new Op_Button     (197.5 , 95 , 52.5 , 52.5 , "+"    , display );

  Number_Button *b5  = new Number_Button (10    , 157.5 , 52.5 , 52.5 , 7 , "7" , display );
  Number_Button *b6  = new Number_Button (72.5  , 157.5 , 52.5 , 52.5 , 8 , "8" , display );
  Number_Button *b7  = new Number_Button (135   , 157.5 , 52.5 , 52.5 , 9 , "9" , display );
  Op_Button     *b8  = new Op_Button     (197.5 , 157.5 , 52.5 , 52.5 ,     "-" , display );

  Number_Button *b9  = new Number_Button (10    , 220 , 52.5 , 52.5 , 4 , "4" , display );
  Number_Button *b10 = new Number_Button (72.5  , 220 , 52.5 , 52.5 , 5 , "5" , display );
  Number_Button *b11 = new Number_Button (135   , 220 , 52.5 , 52.5 , 6 , "6" , display );
  Op_Button     *b12 = new Op_Button     (197.5 , 220 , 52.5 , 52.5 ,     "*" , display );

  Number_Button *b13 = new Number_Button (10    , 282.5 , 52.5 , 52.5 , 1 , "1" , display );
  Number_Button *b14 = new Number_Button (72.5  , 282.5 , 52.5 , 52.5 , 2 , "2" , display );
  Number_Button *b15 = new Number_Button (135   , 282.5 , 52.5 , 52.5 , 3 , "3" , display );
  Op_Button     *b16 = new Op_Button     (197.5 , 282.5 , 52.5 , 52.5 ,     "/" , display );

  Op_Button     *b17 = new Op_Button     (10    , 345 , 52.5 , 52.5 ,     "C" , display );
  Number_Button *b18 = new Number_Button (72.5  , 345 , 52.5 , 52.5 , 0 , "0" , display );
  Op_Button     *b19 = new Op_Button     (135   , 345 , 52.5 , 52.5 ,     "." , display );
  Op_Button     *b20 = new Op_Button     (197.5 , 345 , 52.5 , 52.5 ,     "E" , display );

  b18 -> callback(Number_Button::clickcb);
  b15 -> callback(Number_Button::clickcb);
  b14 -> callback(Number_Button::clickcb);
  b13 -> callback(Number_Button::clickcb);
  b11 -> callback(Number_Button::clickcb);
  b10 -> callback(Number_Button::clickcb);
  b9  -> callback(Number_Button::clickcb);
  b7  -> callback(Number_Button::clickcb);
  b6  -> callback(Number_Button::clickcb);
  b5  -> callback(Number_Button::clickcb);

  b1  -> callback(Op_Button::clickcb);
  b2  -> callback(Op_Button::clickcb);
  b3  -> callback(Op_Button::clickcb);
  b4  -> callback(Op_Button::clickcb);
  b8  -> callback(Op_Button::clickcb);
  b12  -> callback(Op_Button::clickcb);
  b16  -> callback(Op_Button::clickcb);
  b17  -> callback(Op_Button::clickcb);
  b19  -> callback(Op_Button::clickcb);
  b20  -> callback(Op_Button::clickcb);
  // done with widgets

  //display updating
  //Updating a stack class with operands
  //doing math
  
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
