#include <iostream>

auto main( ) -> int {
  char c;
  std::cin >> c;
  
  std::cout << static_cast<int>(c) << std::endl;
  return 0;
}
