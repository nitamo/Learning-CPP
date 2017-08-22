#include "vector.h"

int main(int argc, char* argv[]) {
	Point start = {2.0, 0.0};
	Point end = {0.0, 2.0};

	Vector vect = {start, end};

	printVectorInfo(vect);
}
