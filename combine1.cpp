#include <iostream>
#include <stdexcept>
#include <vector>
int get_elem(std::vector<int> &v, int index) {

  if (index >= v.size()) {
    throw std::out_of_range("Index is out of range of vector.");
  }

  return v[index];
}
int combine1(std::vector<int> &v) {

  int acc = 1;

  for (size_t i = 0; i < v.size(); i++) {
    int x = get_elem(v, i);

    acc *= x;
  }

  return acc;
}

int main() {
  std::vector<int> numVector;

  numVector.push_back(1);
  numVector.push_back(2);
  numVector.push_back(3);

  int acc_result = combine1(numVector);

  std::cout << "Accumulated value from the vector " << acc_result << std::endl;
  return 0;
}
