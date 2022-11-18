#include <iostream>

auto main() -> int {
  std::int32_t x;
  std::cin >> x;
  
  for (int i = 1; i <= 3; ++i) {
    for (int j = 1; j <= 10; ++j) {
      if (j != 1)
        std::cout << ' ';

      std::cout << x * i * j;
    }
    
    std::cout << std::endl;
  }

  return 0;
}
