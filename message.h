#ifndef HELLO_H
#define HELLO_H 

//commit #2

using namespace std;

// Creating class
 
class Message
{
 private:
  struct X
      {
      //structured data 
          int id;
      };

  struct Greeting
    {
    // structured data
      X index;
      int lang;
      string phrase;
    };

  public:
    
    // prototype for constructor
    Message();
    
    
    void display() {
      // member function
      Greeting english;
      english.index.id = 0;
      english.lang = 0;
      english.phrase = "Hello World";
      
      Greeting spanish;
      spanish.index.id = 0;
      spanish.lang = 1;
      spanish.phrase = "Hola Mundo";
      
      Greeting french;
      french.index.id = 0;
      french.lang = 2;
      french.phrase = "Bon Jour le monde";
      
      cout << "this is the default display function " << endl << endl;
      cout << english.phrase << endl;
      cout << spanish.phrase << endl;
      cout << french.phrase << endl;
      cout << "-----------------------------------------" << endl << endl;
      
      }
      
    void display(int lang_pick) {
      // member function
      // overloaded function 
      // 
      
      Greeting lang_convert[6];
      lang_convert[0].index.id = 0;
      lang_convert[0].lang = 0;
      lang_convert[0].phrase = "Hello World from the array";
      
      lang_convert[1].index.id = 0;
      lang_convert[1].lang = 1;
      lang_convert[1].phrase = "Hola Mundo from the array";
      
      lang_convert[2].index.id = 0;
      lang_convert[2].lang = 2;
      lang_convert[2].phrase = "Bon Jour le monde from the array";
      
      
      lang_convert[3] = {1,0, "Good Bye"};
      lang_convert[4] = {1,1, "Adios"};
      lang_convert[5] = {1,2, "Au Revior"};
      
      int num = 5;
      int i = 0;
          
      while (i <= num)
      {
        cout << "the value of i: " << i << endl;
        cout << lang_convert[i].phrase << endl;
        
        i = i + 1;
      
      }
      
      cout << "-----------------------------------------" << endl << endl;
       
      cout << " this is the array function " << endl;
            
      cout << endl << endl;
      
      cout << "-----------------------------------------" << endl << endl;
      cout << "This is the language loop: " << lang_pick  << endl;
          
      
      int lang_id;
      
    
      switch(lang_pick)
          {
            case 1:
            lang_id = 0;
            // English is now the system lanaguage
            cout << "English is now the system lanaguage " << endl;
            break;
  
            case 2:
            lang_id = 1;
            // Spanish is now the system lanaguage
            cout << "Spanish is now the system lanaguage " << endl;
            break;
            
            case 3:
            lang_id = 2;
            // French is now the system lanaguage
            cout << "French is now the system lanaguage " << endl;
            break;
          }
          
          int j = 0;
          
          while (j <= num)
              {
                if (lang_convert[j].lang == lang_id)
                   {
                    cout << lang_convert[j].phrase << endl;
                    }               
                j = j + 1;
              }
      
      }
      
    // prototype for destructor
    ~Message();
};


Message::Message()
{	
  // constructor
  // also member function
    cout << "Hello Indy " << endl;
}

Message::~Message()
{	
  // destructor
  // also member function
  cout << "Goodbye Indy " << endl; 
}

// Base class
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape
{
   public:
      int getArea()
      { 
         return (width * height); 
      }
};


#endif 
