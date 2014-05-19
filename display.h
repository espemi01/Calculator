#include <FL/Fl_Box.H>
#include <string>
#include <cstdlib>

using namespace std;

#ifndef DISPLAY_H
#define DISPLAY_H

class Calc_Display : public Fl_Box {
	private:
		long double value;
		string disp;

	public:
		Calc_Display(Fl_Boxtype b, int x, int y, int w, int h, const char *label, long double init)
			: Fl_Box(b,x,y,w,h,label){
			this -> value = init;
			this -> copy_label(to_string(init).c_str());
			}

		void update(long double val) {
			value = (value * 10 ) + val;
			this -> copy_label(to_string(value).c_str());
		}
		void opupdate(long double val) {
			value = val;
			this -> copy_label(to_string(value).c_str());
		}
		void clear() {
			value = 0;
			this -> copy_label(to_string(value).c_str());
		}
		long double getVal() {return value;}
};
#endif