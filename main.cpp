#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <string>
#include "button.h"


using namespace std;

Fl_Box *box;

void exitcb(Fl_Widget * something,void * eh){
  exit(0);
}

int main(int argc, char *argv[]){
  
  Fl_Window *window = new Fl_Window(260,407.5);

  box = new Fl_Box(FL_DOWN_BOX,10,10,240,75,"Display");

  Fl_Button *b1  = new Fl_Button (10    , 95 , 52.5 , 52.5 , "±"    );
  Fl_Button *b2  = new Fl_Button (72.5  , 95 , 52.5 , 52.5 , "sqrt" );
  Fl_Button *b3  = new Fl_Button (135   , 95 , 52.5 , 52.5 , "^"    );
  Fl_Button *b4  = new Fl_Button (197.5 , 95 , 52.5 , 52.5 , "+"    );

  Number_Button *b5  = new Number_Button (10    , 157.5 , 52.5 , 52.5 , "7" );
  Number_Button *b6  = new Number_Button (72.5  , 157.5 , 52.5 , 52.5 , "8" );
  Number_Button *b7  = new Number_Button (135   , 157.5 , 52.5 , 52.5 , "9" );
  Fl_Button     *b8  = new Fl_Button     (197.5 , 157.5 , 52.5 , 52.5 , "-" );

  Number_Button *b9  = new Number_Button (10    , 220 , 52.5 , 52.5 , "4" );
  Number_Button *b10 = new Number_Button (72.5  , 220 , 52.5 , 52.5 , "5" );
  Number_Button *b11 = new Number_Button (135   , 220 , 52.5 , 52.5 , "6" );
  Fl_Button     *b12 = new Fl_Button     (197.5 , 220 , 52.5 , 52.5 , "*" );

  Number_Button *b13 = new Number_Button (10    , 282.5 , 52.5 , 52.5 , "1" );
  Number_Button *b14 = new Number_Button (72.5  , 282.5 , 52.5 , 52.5 , "2" );
  Number_Button *b15 = new Number_Button (135   , 282.5 , 52.5 , 52.5 , "3" );
  Fl_Button     *b16 = new Fl_Button     (197.5 , 282.5 , 52.5 , 52.5 , "/" );

  Fl_Button     *b17 = new Fl_Button     (10    , 345 , 52.5 , 52.5 , "C" );
  Number_Button *b18 = new Number_Button (72.5  , 345 , 52.5 , 52.5 , "0" );
  Fl_Button     *b19 = new Fl_Button     (135   , 345 , 52.5 , 52.5 , "." );
  Fl_Button     *b20 = new Fl_Button     (197.5 , 345 , 52.5 , 52.5 , "E" );
  
  // done with widgets
  
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
