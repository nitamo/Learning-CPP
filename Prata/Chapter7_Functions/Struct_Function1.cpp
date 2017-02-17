#include <iostream>

struct vect {
  double x;
  double y;
};

void print_vect(vect *);
vect* get_vect();

int main(int argc, char const *argv[]) {
  vect v1 = {10.0, 20.0};
  print_vect(&v1);
  vect* p_v = get_vect();
  std::cout << "Returned vector has x=" << p_v->x << " : y=" << p_v->y << " coordinates" << std::endl;
  delete p_v;
  return 0;
}

void print_vect(vect* p_v) {
  std::cout << "Received vector has x=" << p_v->x << " : y=" << p_v->y << " coordinates" << std::endl;
}

vect* get_vect() {
  vect* p_v = new vect;
  p_v->x = 30.0;
  p_v->y = 40.0;
  return p_v;
}
