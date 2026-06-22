#include <iostream>
#include <vector>

void print_vector(std::vector<int> &v) {
  for (auto &i : v) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}

int partition(std::vector<int> &v, int low, int high) {
  auto pivot_value{v[high]};
  auto i{low - 1};
  for (auto j{low}; j < high; ++j) {
    if (v[j] <= pivot_value) {
      ++i;
      std::swap(v[i], v[j]);
    }
  }
  std::swap(v[i + 1], v[high]);
  return i + 1;
}

std::vector<int> &quick_sort(std::vector<int> &v, int low, int high) {
  if (low >= high) {
    return v;
  };
  auto pivot_index{partition(v, low, high)};
  quick_sort(v, low, pivot_index - 1);
  quick_sort(v, pivot_index + 1, high);
  return v;
}

int main() {
  std::vector<int> v{8, 3, 12, 1, 7, 5, 10};
  std::cout << "list before sorting: ";
  print_vector(v);
  quick_sort(v, 0, v.size() - 1);
  std::cout << "list after sorting: ";
  print_vector(v);

  return 0;
}
