#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <string>
#include "opbutton.h"
#include "numberbutton.h"


using namespace std;

Fl_Box *box;

void exitcb(Fl_Widget * something,void * eh){
  exit(0);
}

int main(int argc, char *argv[]){
  
  Fl_Window *window = new Fl_Window(260,407.5);

  box = new Fl_Box(FL_DOWN_BOX,10,10,240,75,"Display");

  Op_Button *b1      = new Op_Button     (10    , 95 , 52.5 , 52.5 , "±"    );
  Op_Button *b2      = new Op_Button     (72.5  , 95 , 52.5 , 52.5 , "sqrt" );
  Op_Button *b3      = new Op_Button     (135   , 95 , 52.5 , 52.5 , "^"    );
  Op_Button *b4      = new Op_Button     (197.5 , 95 , 52.5 , 52.5 , "+"    );

  Number_Button *b5  = new Number_Button (10    , 157.5 , 52.5 , 52.5 , 7 , "7" );
  Number_Button *b6  = new Number_Button (72.5  , 157.5 , 52.5 , 52.5 , 8 , "8" );
  Number_Button *b7  = new Number_Button (135   , 157.5 , 52.5 , 52.5 , 8 , "9" );
  Op_Button     *b8  = new Op_Button     (197.5 , 157.5 , 52.5 , 52.5 , "-" );

  Number_Button *b9  = new Number_Button (10    , 220 , 52.5 , 52.5 , 4 , "4" );
  Number_Button *b10 = new Number_Button (72.5  , 220 , 52.5 , 52.5 , 5 , "5" );
  Number_Button *b11 = new Number_Button (135   , 220 , 52.5 , 52.5 , 6 , "6" );
  Op_Button     *b12 = new Op_Button     (197.5 , 220 , 52.5 , 52.5 , "*" );

  Number_Button *b13 = new Number_Button (10    , 282.5 , 52.5 , 52.5 , 1 , "1" );
  Number_Button *b14 = new Number_Button (72.5  , 282.5 , 52.5 , 52.5 , 2 , "2" );
  Number_Button *b15 = new Number_Button (135   , 282.5 , 52.5 , 52.5 , 3 , "3" );
  Op_Button     *b16 = new Op_Button     (197.5 , 282.5 , 52.5 , 52.5 , "/" );

  Op_Button     *b17 = new Op_Button     (10    , 345 , 52.5 , 52.5 , "C" );
  Number_Button *b18 = new Number_Button (72.5  , 345 , 52.5 , 52.5 , 0 , "0" );
  Op_Button     *b19 = new Op_Button     (135   , 345 , 52.5 , 52.5 , "." );
  Op_Button     *b20 = new Op_Button     (197.5 , 345 , 52.5 , 52.5 , "E" );

  b18 -> callback(Number_Button::clickcb);
  
  // done with widgets
  
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
