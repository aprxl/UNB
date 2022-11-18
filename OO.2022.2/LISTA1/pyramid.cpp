#include <iostream>

// Testing github credentials

auto main() -> int {
  std::int32_t x;
  std::cin >> x;
  
  for (int i = 1; i <= x; ++i) {
    for (int j = 0; j < x - i; ++j) {
      std::cout << ' ';
    }
    
    for (int j = 0; j < i; ++j) {
      std::cout << i << ' ';
    }
    
    std::cout << std::endl;
  }
  return 0;
}
