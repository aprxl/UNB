#include <iostream>

auto main() -> int {
  std::int32_t x, y;
  std::cin >> x >> y;
  
  if ( x % 2 != 0 )
    x++;
  
  while ( x <= y ) {
    std::cout << x << std::endl;

    x += 2;
  }
  
  return 0;
}
