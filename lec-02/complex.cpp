// ADT: Complex numbers: real + i* imaginary
#include <iostream>
#include <math.h>
using namespace std;

class Complex{

public:
	// Constructor has the same name as the class
	// Constructor has no return value
	// Constructor is called when we create a new object
	Complex(){ // default constructor
		re = 0;
		im = 0;
	}
	Complex(int a, int b){ // Parametrized constructor
		re = a;
		im = b;
	}

	void conjugate();
	double magnitude() const; //getter
	/* const at the end of the function means:
	   this function cannot change any of the member variables
	*/
	void print() const;
	//getter
	double getRealPart() const{ return re;}
	double getImaginary()const {return im;}
	//setter
	//void initialize(double a, double b);

private:
	double re; //real part
	double im; //imaginary part

};


void Complex::conjugate(){
	// :: -> scope operator 
	im = -1*im;
}

double Complex::magnitude() const{
	return sqrt(re*re + im*im);
}

void Complex::print() const{
	cout<<"Printing: ";
	cout<<re<<" + i*"<<im<<endl;
}


/*void Complex:: initialize(double a, double b){
	re = a;
	im = b;
}*/
int main(){
	// Constructors: Special member function that is used
	// to initialize objects

	Complex c(5, 2);
	/*
	Where is the variable c created in program memory?
	A. Stack
	B. Heap
	C. Not created 
	*/
	c.print();
	//c.initialize(5, 2);
	//c.print(); // 5 + i*2
	c.conjugate();
	c.print();

/*
A. 0 + i* 0
B. -6
C. 
*/










	return 0;
}