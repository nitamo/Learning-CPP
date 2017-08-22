#include <iostream>
#include <cmath>

struct vect {
  double x;
  double y;
};

void show_vect(vect * p_vect, void (*pf)(vect *));
void cartesian(vect *);
void polar(vect *);

int main(int argc, char const *argv[]) {
  vect v = {10.0, 20.0};
  std::cout << "Printing as cartesian coordinates" << '\n';
  show_vect(&v, cartesian);

  std::cout << "Printing as polar coordinates" << '\n';
  show_vect(&v, polar);
  return 0;
}

void show_vect(vect* p_v, void (*pf)(vect *)) {
  (*pf)(p_v);
}

void cartesian(vect* p_v) {
  std::cout << "X = " << p_v->x << " : Y = " << p_v->y << '\n';
}

void polar(vect* p_v) {
  std::cout << "Radius = " << std::sqrt(std::pow(p_v->x, 2.0) + std::pow(p_v->y, 2.0)) <<
  " : Angle = " << std::atan2(p_v->x, p_v->y) << '\n';
}
