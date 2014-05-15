#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
  string first ("Hello");
  string second ("World!");

  string output;
  output = first + ' ' + second;
  cout << output << endl;

  return 0;
}
