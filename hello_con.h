#ifndef HELLO_H
#define HELLO_H 

//commit #2

using namespace std;
 
// Creating class
 
class Message
{
 private:
    
  public:
    Message();
    
    void display() {
      cout << "Hello World\n";
    }
    
    ~Message();
};

Message::Message()
{	cout << "Hello Indy " << endl;
}

Message::~Message()
{	cout << "Goodbye Indy " << endl; 
}

#endif 
