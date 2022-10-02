// CA1Prob4.cpp : flower class with 
//

#include <iostream>
#include <string>

using namespace std;

class flower {
private:
	string name;
	int petal;
	double price;

public:		
	flower(string n, int pt, double pr); // Constructor	
	void setName(string n);   // Set the name of the flower.	
	void setPetal(int pt);    // Set the petal number of the flower.	
	void setPrice(double pr); // Set the price of the flower.	
	string getName();  // Return the name of the flower.	
	int getPetal();    // Return the petal number of the flower.
	double getPrice(); // Return the price of the flower.
};


flower::flower(string n, int pt, double pr) {
	cout << "do here";
	name = n;
	petal = pt;
	price = pr;
}
void flower::setName(string n) {
	name = n;
}
void flower::setPetal(int pt) {
	petal = pt;
}
void flower::setPrice(double pr) {
	price = pr;
}
string flower::getName() {
	return name;
}
int flower::getPetal() {
	return petal;
}
double flower::getPrice() {
	return price;
}

// Main function for the program
int main() {
	flower flower1{"Nodding Trillium",3,75.0};
	flower flower2{ "Prairie Rose",5,100.0 };
	flower flower3{ "Bluebell",6,85.0 };

	cout << flower1.getName() << ',' << flower1.getPetal() << ',' << flower1.getPrice() << endl;
	cout << flower2.getName() << ',' << flower2.getPetal() << ',' << flower2.getPrice() << endl;
	cout << flower3.getName() << ',' << flower3.getPetal() << ',' << flower3.getPrice() << endl;

	flower1.setPetal(6);
	cout << flower1.getName() << ',' << flower1.getPetal() << ',' << flower1.getPrice() << endl;

	return 0;
}