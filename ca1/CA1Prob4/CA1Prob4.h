#ifndef CA1Prob4_H_
#define FLOWER_H_
#include <string>

using namespace std;

class flower
{
private:
	string name;
	int petal;
	double price;

public:
	// constructor
	flower(string n, int pt, double pr);
	// set the name of flower
	void setName(string n);
	// set the petal number of the flower
	void setPetal(double pt);
	// set the price of the flower
	void setPrice(double pr);
	// return the name of the flower
	string getName();
	// return the petal number of the flower
	int getPetal();
	// return the price of the flower
	double getPrice();
};

#endif
