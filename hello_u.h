#ifndef NAME_H
#define NAME_H 

using namespace std;
 
// Creating class
// commit #2
 
class Naming {
    int width, height;
    string name, thanks;
  public:
    void set_values (int,int);
    void set_name(string);
    int area() {return width*height;}
    string hello() {return  thanks + name ;}
};

void Naming::set_values (int x, int y) {
  width = x;
  height = y;
}

void Naming::set_name (string n1) {
  name = n1;
  thanks = "Thanks for using our software, ";
}

#endif 
