#include <iostream>
#include <string>

void print_array(std::string[]);
void fill_array(std::string[]);
const int size = 5;

int main(int argc, char const *argv[]) {
  std::string str_ar[size];
  std::cout << "Filling array" << '\n';
  fill_array(str_ar);

  std::cout << "Printing array" << '\n';
  print_array(str_ar);
  return 0;
}

void fill_array(std::string str_ar[]) {
  for(int i = 0; i < size; i++) {
    std::cout << "Enter a new string: ";
    std::getline(std::cin, str_ar[i]);
  }
}

void print_array(std::string str_ar[]) {
  for(int i = 0; i < size; i++) {
    std::cout << "String [" << i << "] is : " << str_ar[i] << '\n';
  }
}
