#ifndef VECTOR_H_
#define VECTOR_H_

struct Point {
	double x;
	double y;
};

struct Vector {
	Point start;
	Point end;
};

double getVectorLenght(Vector &);
void printVectorInfo(Vector &);

#endif
