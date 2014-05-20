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
		bool entering = false;
		bool showres  = false;


	public:
		Calc_Display(Fl_Boxtype b, int x, int y, int w, int h, const char *label, long double init)
			: Fl_Box(b,x,y,w,h,label){
			this -> value = init;

			this -> copy_label(to_string(init).c_str());
			}

		void update(long double val) {
			if(this -> showres){
				this -> value = 0;
				this -> showres = false;
			}
			value = (value * 10 ) + val;
			this -> copy_label(to_string(value).c_str());
			entering = true;
		}
		void opupdate(long double val) {
			this -> value = val;
			this -> copy_label(to_string(value).c_str());
			showres = true;
			entering = false;
		}
		void clear() {
			value = 0;
			this -> copy_label(to_string(value).c_str());
			showres = false;

		}
		long double getVal() {return value;}
		bool getEnter(){return entering;}
		void setEnter(bool b){entering = b;}
		bool getResShow(){return showres;}
		void setShow(bool b){showres = b;}
};
#endif