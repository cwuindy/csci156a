#include<iostream>
#include "message.h" 

int main()
{
	
	cout << "Please select a language: " << endl;
	cout << "1 for english, 2 for spanish or 3 for French " << endl;
	
	int lang_pick;
	cin >> lang_pick;
	
	cout << "-----------------------------------------" << endl << endl;
	cout << "The language selection was :" << lang_pick << endl;
	cout << "-----------------------------------------" << endl << endl;
	
	Message c;    // Creating object
	c.display();  // Calling function
	c.display(lang_pick); //calling function
  
	Rectangle Rect;
 
  Rect.setWidth(5);
  Rect.setHeight(7);

  // Print the area of the sign.
  
	cout << "Total area of sign: " << Rect.getArea() << endl;
	
	return 0;
}
