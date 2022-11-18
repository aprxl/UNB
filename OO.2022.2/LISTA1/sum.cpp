#include <iostream>

auto main() -> int {
  std::int32_t x;
  std::cin >> x;
  
  for (int i = 1; i <= x; ++i) {
    std::int32_t sum{0};

    for (int j = 1; j <= i; ++j) {
      sum += j;
      
      if (j != 1)
        std::cout << '+';
               
      std::cout << j;
    }
    
    std::cout << '=' << sum << std::endl;
  }

  return 0;
}
