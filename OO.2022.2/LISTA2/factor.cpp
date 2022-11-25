#include <iostream>

auto is_factor( int x, int y ) -> bool {
  return y % x == 0;
}

auto main( ) -> int {
  int x, y;
  std::cin >> x >> y;
  
  std::cout << is_factor( x, y ) << std::endl;
  return 0;
}
