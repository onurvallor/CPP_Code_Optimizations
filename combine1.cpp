#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <vector>

int get_elem(std::vector<int> &v, int index) {

  if (index >= v.size()) {
    throw std::out_of_range("Index is out of range of vector.");
  }

  return v[index];
}
uint64_t combine1(std::vector<int> &v) {

  uint64_t acc = 1;

  for (size_t i = 0; i < v.size(); i++) {
    int x = get_elem(v, i);

    acc *= x;
  }

  return acc;
}

int main(int argc, char *argv[]) {
  std::vector<int> numVector;
  int numElems = std::stoi(argv[1]);
  for (size_t i = 1; i < numElems; i++) {
    numVector.push_back(i);
  }

  uint64_t acc_result = combine1(numVector);

  std::cout << "Accumulated value from the vector " << acc_result << std::endl;
  return 0;
}
