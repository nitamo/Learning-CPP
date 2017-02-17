#import <iostream>

void test_array(double[], int);

int main(int argc, char const *argv[]) {
  double array[] = {1.0, 2.0, 4.0, 8.0, 16.0};
  std::cout << "Size of array: " << sizeof(array) << std::endl;
  std::cout << "Size of array's first element: " << sizeof(array[0]) << std::endl;
  test_array(array, 5);
  return 0;
}

void test_array(double array[], int size) {
  std::cout << "Size of array in function: " << sizeof(array) << std::endl;
}
