#include <iostream>
using namespace std;

class Date
{	/* data */
//By default all the member variables and functions of
//a class are private
public:
	void setDate(int day, int mon){ //member function //setter
		dd = day;
		mm = mon;
	}
	int getDay() {return dd;} //getter functions
	int getMon() {return mm;}//getter
	void printDate(){
		cout<<dd << "/"<<mm<<endl;
	}
private:
	int dd; //member variables
	int mm;
};

int main(){
	Date today;
	/*today.dd = 6; // cannot access a private variable
	today.mm = 8;*/
	today.setDate(7, 9);
	today.printDate();
	return 0;
}