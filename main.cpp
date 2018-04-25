#include <iostream>
#include <optional>

int main() {
  std::optional<int> val(1);
  std::cout << *val << std::endl;
}
