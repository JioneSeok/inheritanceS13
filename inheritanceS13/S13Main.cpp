#include <iostream>
using namespace std;
#include "CarS4.h"
#include "SUVS4.h"
#include "Engineer.h"

int main() {
	SUV* newSUV = new SUV();
	newSUV->setWheels(4);
	cout << "The wheels are " << newSUV->getWheels() << endl;
}