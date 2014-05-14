#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <cstdlib>
#include <iostream>

using namespace std;

int screen(){
	Fl_Window *calc = new Fl_Window(400,250);
	Fl_Box *screen = new Fl_Box(10,10,230,100,"0");
	screen->color(FL_WHITE);
	screen->type(FL_UP_BOX);
}

int main(int argc, char *argv[]){
	//FLTK includes a "Shortcut" method.  Basicly it allows you to bind actual keys to a widget.  We could (hopefully) easily add keyboard functionality.

	screen();

	//do something
}
