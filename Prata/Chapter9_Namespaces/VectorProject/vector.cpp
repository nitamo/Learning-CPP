#include <iostream>
#include <cmath>
#include "vector.h"

double getVectorLenght(Vector &v) {
	return sqrt(pow((v.end.x - v.start.x), 2) + pow((v.end.y - v.end.y), 2));
}

void printVectorInfo(Vector &v) {
	std::cout << std::fixed << "Vector info: start.x = " << v.start.x << ", start.y = " << v.start.y << ", end.x = " << v.end.x << ", end.y = " << v.end.y << " length = " << getVectorLenght(v) << std::endl;
}
