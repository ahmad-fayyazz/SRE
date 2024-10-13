#include<iostream>
using namespace std; 
 
class AhmadFayyaz {
public: 
	AhmadFayyaz() {

	}
	void displayName() {
		cout << "THis is my class. I am AhmadFayyaz." << endl; 
	}
	void purpose() {
		cout << "THis class is created for github learnign purposes" << endl; 
	}
};

int main() {
	AhmadFayyaz myself; 
	myself.displayName(); 
	myself.purpose(); 
	return 0; 
}