#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "dog_class.h"

using namespace std;

int main(){
  Animal fred;
 
	fred.setHeight(33);
	fred.setWeight(10);
	fred.setName("Fred");
 
	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
		<< fred.getWeight() << " kgs in weight" << endl;
 
	fred.setAll(34, 12, "Fred");
 
	cout << fred.getName() << " is " << fred.getHeight() << " cms tall and "
		<< fred.getWeight() << " kgs in weight" << endl;
 
	Animal tom(36, 15, "Tom");
 
	cout << tom.getName() << " is " << tom.getHeight() << " cms tall and "
		<< tom.getWeight() << " kgs in weight" << endl;
 
	Dog spot(38, 16, "Spot", "Woof");
 
	cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;
 
	spot.getSound();
 
	tom.toString();
	spot.toString();
 
	spot.Animal::toString();
 
	return 0;
}