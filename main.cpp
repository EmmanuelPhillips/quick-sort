#include <iostream>
#include <vector>

void print_vector(std::vector<int> &v) {
  for (auto &i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

void quick_sort(std::vector<int> &v) {}

int main() {
  std::vector<int> v{8, 3, 12, 1, 7, 5, 10};
  std::cout << "list before sorting: ";
  print_vector(v);
  quick_sort(v);
  std::cout << "list after sotring: ";
  print_vector(v);

  return 0;
}
